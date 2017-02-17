/*
** my_strtok.c for libC in /home/antiaskid/Documents/perso/C/libC_C_Epitech/parser/
**
** Made by Antoine Briaux
** Login   <antoine.briaux@epitech.eu>
**
** Started on  Thu Feb  9 16:03:16 2017 Antoine Briaux
** Last update Tue Feb 14 16:08:55 2017 Antoine Briaux
*/

#include <stdlib.h>
#include "parser.h"

char 			*my_strtok(char *str, char *delim)
{
	static char	*buf = NULL;
	char		*tmp;
	int			dec;

	if (str != NULL)
		buf = my_strdup(str);
	buf += my_strspn(buf, delim);
	if (buf != NULL)
	{
		dec = my_strcspn(buf, delim);
		if (dec == 0)
			return (NULL);
		tmp = my_strndup(buf, dec);
		buf += dec;
		return (tmp);
	}
	return (NULL);
}
