/*
** string_info2.c for libC in /home/antiaskid/Documents/perso/C/libC_C_Epitech/parser/
**
** Made by Antoine Briaux
** Login   <antoine.briaux@epitech.eu>
**
** Started on  Thu Feb  9 12:37:09 2017 Antoine Briaux
** Last update Mon Feb 13 13:43:39 2017 Antoine Briaux
*/

#include <stdlib.h>
#include "parser.h"

char 		*my_strrchr(const char *str, const int c)
{
	char 	*start;

	start = (char *) str;
	while (*(str++));
	while (--str != start && *str != c);
	if (*str == c)
		return ((char *) str);
	return (NULL);
}

int			my_strspn(const char *str1, const char *str2)
{
	int 	nbr_com;

	nbr_com = 0;
	while (*str1 && check_char(*str1, str2))
	{
		nbr_com += 1;
		str1++;
	}
	return (nbr_com);
}

int 		my_strcspn(const char *str1, const char *str2)
{
	int 	nbr_dif;

	nbr_dif = 0;
	while (*str1 && !check_char(*str1, str2))
	{
		nbr_dif += 1;
		str1++;
	}
	return (nbr_dif);
}

char 		*my_strstr(const char *str1, const  char *str2)
{
	int 	i;

	while (*str1 != *str2 && *(str1++))
	{
		if (*str1 == *str2)
		{
			i = 0;
			while (str1[i] && str2[i] && str1[i] == str2[i])
				i += 1;
			if (i == my_strlen(str2))
				return ((char *) str1);
		}
	}
	return (NULL);
}

char 		*my_strdup(const char *str)
{
	char 	*dup;
	int		i;
	int		size;

	i = -1;
	size = my_strlen(str);
	if (!(dup = malloc(size + 2)))
		return (NULL);
	while (i++ < size)
		dup[i] = str[i];
	dup[i] = '\0';
	return (dup);
}
