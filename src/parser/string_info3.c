/*
** string_info3.c for libC in /home/antiaskid/Documents/perso/C/libC_C_Epitech/parser/
**
** Made by Antoine Briaux
** Login   <antoine.briaux@epitech.eu>
**
** Started on  Thu Feb  9 17:24:20 2017 Antoine Briaux
** Last update Thu Apr  6 15:54:38 2017 Antoine Briaux
*/

#include <stdio.h>
#include <stdlib.h>
#include "parser.h"

char 				*my_strndup(const char *str, const unsigned int n)
{
	char 			*dup;
	unsigned int	i;

	if (!(dup = malloc(n + 1)))
		return (NULL);
	i = -1;
	while (str[++i] && i < n)
		dup[i] = str[i];
	dup[i] = '\0';
	return (dup);
}

char				*my_strpbrk(const char *str, const char *accept)
{
	int				i;

	while (*str)
	{
		i = 0;
		while (accept[i] && accept[i] != *str)
			i++;
		if (*str == accept[i])
			return ((char *) str);
		str++;
	}
	return (NULL);
}

char				*my_strdup_cat(const char *str1, const char *str2)
{
	char			*dup;
	int 			i, j;

	if (str1 && str2)
		dup = malloc(my_strlen(str1) + my_strlen(str2) + 1);
	else if (str1)
		dup = malloc(my_strlen(str1) + 1);
	else if (str2)
		dup = malloc(my_strlen(str2) + 1);
	else
		return (NULL);
	i = 0;
	if (str1 != NULL)
	{
		while (str1[i])
		{
			dup[i] = str1[i];
			i++;
		}
	}
	if (str2 != NULL)
	{
		j = 0;
		while (str2[j])
		{
			dup[i] = str2[j];
			i++;
			j++;
		}
	}
	dup[i] = '\0';
	return (dup);
}

int					check_char(char c, char *str)
{
	while (*str)
	{
		if (c == *str)
			return (1);
		str++;
	}
	return (0);
}

int 				my_strstr_int(char *str1, char *str2)
{
	int 	i;
	int 	pos;

	pos = 0;
	while (*(str1++))
	{
		if (*str1 == *str2)
		{
			i = 0;
			while (str1[i] && str2[i] && str1[i] == str2[i])
				i += 1;
			if (i == my_strlen(str2))
				return (pos + 1);
		}
		pos++;
	}
	return (-1);
}
