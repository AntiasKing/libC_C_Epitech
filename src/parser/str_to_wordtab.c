/*
** str_to_wordtab.c for libC in /home/antiaskid/Documents/perso/C/libC_C_Epitech/parser/
**
** Made by Antoine Briaux
** Login   <antoine.briaux@epitech.eu>
**
** Started on  Sun Feb 12 16:01:51 2017 Antoine Briaux
** Last update Fri Apr  7 17:31:58 2017 Antoine Briaux
*/

#include "string.h"
#include <stdlib.h>
#include "parser.h"

int         count_word(char *str, char *delim)
{
    int     count;

    count = 0;
    while (my_strpbrk(str, delim) != NULL)
    {
        str += my_strcspn(str, delim);
        str += my_strspn(str, delim);
        count += 1;
    }
    if (*str != '\0')
        count += 1;
    return (count);
}
char        **str_to_wordtab(char *str, char *delim)
{
    char    **wordtab;
    int     i;
    int     nbr_line;

    if (str != NULL && delim != NULL)
    {
        nbr_line = count_word(str, delim);
        if (!(wordtab = malloc(sizeof(char *) * (nbr_line + 1))))
            return (NULL);
        wordtab[0] = my_strtok(str, delim);
        i = 0;
        while (++i < nbr_line)
            wordtab[i] = my_strtok(NULL, delim);
        wordtab[i] = NULL;
        return (wordtab);
    }
    else
        return (NULL);
}

int 	wordtab_length(char **wordtab)
{
	int	nbr_line;

	if (wordtab)
	{
		nbr_line = 0;
		while (wordtab[nbr_line])
			nbr_line++;
		return (nbr_line);
	}
	return (-1);
}

void 	destroy_wordtab(char **wordtab)
{
	if (wordtab)
	{
		while (*wordtab)
		{
			free(*wordtab);
			wordtab++;
		}
		free(wordtab);
	}
}
