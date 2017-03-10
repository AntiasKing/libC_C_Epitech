/*
** get_next_line.c for get_next_line in /home/antiaskid/Documents/B1/CPE/CPE_2016_getnextline/
**
** Made by Antoine Briaux
** Login   <antoine.briaux@epitech.eu>
**
** Started on  Thu Jan  5 10:38:05 2017 Antoine Briaux
** Last update Fri Mar 10 15:58:22 2017 Antoine Briaux
*/

#include <unistd.h>
#include <stdlib.h>
#include "get_next_line.h"

static char     *xmalloc(int size)
{
    char        *str;
    int         i;

    i = 0;
    if (!(str = malloc(size)))
        return (NULL);
    while (i < size)
    {
        str[i] = '\0';
        i += 1;
    }
    return (str);
}

static int     	check_end_line(char *str, int size_line, int *is_end_line)
{
    int         i;

    i = 0;
    if (str == NULL)
        return (0);
    while (i < size_line)
    {
        if (str[i] == '\n')
        {
            *is_end_line = 1;
            return (i);
        }
        i += 1;
    }
    return (0);
}

static char     *my_strcat(char *line, char *buffer,
                int size_line, int size_read)
{
    char        *cat;
    int         i;

    i = 0;
    if (!(cat = xmalloc(size_line + size_read + 1))) return (NULL);
    if (line != NULL)
    {
        while (i < size_line + size_read)
        {
            if (i < size_line)
                cat[i] = line[i];
            else
                cat[i] = buffer[i - size_line];
            i += 1;
        }
    } else {
        while (i < size_read)
        {
            cat[i] = buffer[i];
            i += 1;
        }
    }
    cat[i] = '\0';
    free(line);
    return (cat);
}

char            *cut_line(char *line, int pos_end_line, int *size_line)
{
    int         i;
    int         j;
    char        *result;

    if (!(result = xmalloc(pos_end_line + 1)))
        return (NULL);
    i = 0;
    while (i < pos_end_line)
    {
        result[i] = line[i];
        i += 1;
    }
    result[i] = '\0';
    i += 1;
    j = 0;
    while (i < *size_line)
    {
        line[j] = line[i];
        i += 1;
        j += 1;
    }
    line[j] = '\0';
    *size_line -= pos_end_line + 1;
    return (result);
}
char            *get_next_line(const int fd)
{
    char buffer[READ_SIZE];
    static char *line = NULL;
    char        *result;
    int         is_end_line;
    int         size_read;
    static int  size_line;
    int         pos_end_line;

    is_end_line = 0;
    while (1)
    {
        pos_end_line = check_end_line(line, size_line, &is_end_line);
        if (is_end_line)
            break;
        size_read = read(fd, buffer, READ_SIZE);
        if (size_read <= 0)
        {
            free(line);
            return (NULL);
        }
        line = my_strcat(line, buffer, size_line, size_read);
        size_line += size_read;
    }
    result = cut_line(line, pos_end_line, &size_line);
    return (result);
}
