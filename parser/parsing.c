/*
** parsing.c for libC in /home/antiaskid/Documents/perso/C/libC_C_Epitech/
**
** Made by Antoine Briaux
** Login   <antoine.briaux@epitech.eu>
**
** Started on  Wed Feb  8 14:59:11 2017 Antoine Briaux
** Last update Wed Feb  8 18:32:00 2017 Antoine Briaux
*/

// int		my_strlen(char *str)
// {
// 	while (*str++);
// }

int 			my_strlen(const char *str);

char			*my_strcat(char *dest, const char *src)
{
	int i;
	int j;

	i = -1;
	j = -1;
	while (dest[++i] != '\0');
	while (src[++j] != '\0')
	{
		dest[i] = src[j];
		i += 1;
	}
	dest[i] = '\0';
	return (dest);
}

char			*my_strncat(char *dest, const char *src, int n)
{
	int	i;
	int j;

	i = -1;
	j = -1;
	while (dest[++i] != '\0');
	while (src[++j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i += 1;
	}
	dest[i] = '\0';
	return (dest);
}

char			*my_strcpy(char *dest, const char *src)
{
	int	i;

	i = -1;
	while (src[++i] != '\0')
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

char			*my_strncpy(char *dest, const char *src, int n)
{
	int	i;

	i = -1;
	while (src[++i] != '\0' && i < n)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

unsigned int 	my_strxfrm(char *dest, const char *src, int n)
{
	int i;

	i = -1;
	while (++i < n)
		dest[i] = src[n];
	return (my_strlen(src));
}
