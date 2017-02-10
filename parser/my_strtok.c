/*
** my_strtok.c for libC in /home/antiaskid/Documents/perso/C/libC_C_Epitech/parser/
**
** Made by Antoine Briaux
** Login   <antoine.briaux@epitech.eu>
**
** Started on  Thu Feb  9 16:03:16 2017 Antoine Briaux
** Last update Thu Feb  9 18:09:29 2017 Antoine Briaux
*/

#include <stdlib.h>
#include "parser.h"

int				check_delim(char *delim, char c)
{
	int			i;

	i = -1;
	while (delim[++i])
	{
		if (delim[i] == c)
			return (1);
	}
	return (0);
}

char 			*my_strtok(char *str, char *delim)
{
	static char	*buf;
	char 		*tmp;
	int 		i;

	if (str != NULL)
		buf = my_strdup(str);
	if (buf != NULL)
	{
		i = -1;
		while (buf[++i])
		{
			if (check_delim(delim, buf[i]))
			{
				tmp = my_strndup(buf, i);
				buf = buf + i + 1;
				return (tmp);
			}
		}
		tmp = my_strdup(buf);
		buf = NULL;
		return (tmp);
	}
	return (NULL);
}
