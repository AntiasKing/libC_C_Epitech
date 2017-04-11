/*
** mem_gest.c for Lib_C in /home/antiaskid/Documents/B2/PSU/PSU_2016_minishell2/lib/src/
**
** Made by Antoine Briaux
** Login   <antoine.briaux@epitech.eu>
**
** Started on  Mon Mar 20 18:35:32 2017 Antoine Briaux
** Last update Fri Mar 24 16:45:03 2017 Antoine Briaux
*/

# include <stdlib.h>

void 		my_memset(void *src, int value, int size)
{
	char 	*src_c;
	int 	i;

	src_c = (char *) src;
	i = 0;
	while (i < size)
	{
		src_c[i] = value;
		i++;
	}
}

void 		my_memcpy(void *dest, void *src, int size)
{
	char	*dest_c;
	char 	*src_c;
	int 	i;

	dest_c = (char *) dest;
	src_c = (char *) src;
	i = 0;
	while (i < size)
	{
		dest_c[i] = src_c[i];
		i++;
	}
}

void 		*my_realloc(void *ptr, int new_size, int old_size)
{
	void 	*new_ptr;

	if (!(new_ptr = malloc(new_size)))
		return (ptr);
	my_memcpy(new_ptr, ptr, old_size);
	free(ptr);
	return (new_ptr);
}
