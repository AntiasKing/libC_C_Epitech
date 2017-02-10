/*
** string_info.c for libC in /home/antiaskid/Documents/perso/C/libC_C_Epitech/parser/
**
** Made by Antoine Briaux
** Login   <antoine.briaux@epitech.eu>
**
** Started on  Wed Feb  8 18:30:17 2017 Antoine Briaux
** Last update Thu Feb  9 12:47:42 2017 Antoine Briaux
*/

#include <stdlib.h>

int 	my_strlen(char *str)
{
	int i;

	i = -1;
	while (str[++i] != '\0');
	return (i);
}

int 	my_strcmp(const char *str1, const char *str2)
{
	int i;

	i = -1;
	while (str1[++i] && str1[i] == str2[i]);
	if (str1[i] - str2[i] < 0)
		return (-1);
	else if (str1[i] - str2[i] > 0)
		return (1);
	else
		return (0);
}

int 	my_strncmp(const char *str1, const char *str2, const int n)
{
	int i;

	i = -1;
	while (str1[++i] && i < n && str1[i] == str2[i]);
	if (str1[i] - str2[i] < 0)
		return (-1);
	else if (str1[i] - str2[i] > 0)
		return (1);
	else
		return (0);
}

int 	my_strcoll(const char *str1, const char *str2)
{
	int i;

	i = -1;
	while (str1[i++] && str1[i] == str2[i]);
	return (str1[i] - str2[i]);
}

char 	*my_strchr(const char *str, const int x)
{
	while (*(str++) && *str != x);
	if (*str == x)
		return ((char *) str);
	return (NULL);
}
