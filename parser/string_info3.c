/*
** string_info3.c for libC in /home/antiaskid/Documents/perso/C/libC_C_Epitech/parser/
**
** Made by Antoine Briaux
** Login   <antoine.briaux@epitech.eu>
**
** Started on  Thu Feb  9 17:24:20 2017 Antoine Briaux
** Last update Thu Feb  9 17:52:34 2017 Antoine Briaux
*/

#include <stdio.h>
#include <stdlib.h>
#include "parser.h"

char 					*my_strndup(const char *str, const unsigned int n)
{
	char 				*dup;
	unsigned int		i;

	if (!(dup = malloc(n + 1)))
		return (NULL);
	i = -1;
	while (str[++i] && i < n)
	{
		dup[i] = str[i];
	}
	dup[i] = '\0';
	return (dup);
}
