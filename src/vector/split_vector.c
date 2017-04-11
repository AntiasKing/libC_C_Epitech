/*
** split_vector.c for lib_C in /home/antiaskid/Documents/B2/PSU/PSU_2016_minishell2/lib/src/vector/
**
** Made by Antoine Briaux
** Login   <antoine.briaux@epitech.eu>
**
** Started on  Thu Apr  6 14:15:39 2017 Antoine Briaux
** Last update Thu Apr  6 15:56:50 2017 Antoine Briaux
*/

# include <stdlib.h>
# include "parser.h"
# include "mem_gest.h"
# include "vector.h"

char 		*split_vector(t_vector *to_split, t_vector *left,
				t_vector *right, int index)
{
	int 	i;
	char 	*tmp;

	i = 0;
	init_vector(left);
	while (i < index)
	{
		add_end_vector(to_split->items[i], left);
		i++;
	}
	i = index + 1;
	init_vector(right);
	while ((unsigned) i < to_split->nbr_elem)
	{
		add_end_vector(to_split->items[i], right);
		i++;
	}
	tmp = (char *) to_split->items[index];
	free_vector(to_split);
	return (tmp);
}

char 		*vect_to_str(t_vector *vect)
{
	int		i;
	char 	*tmp;

	i = 0;
	tmp = NULL;
	while ((unsigned) i < vect->nbr_elem)
	{
		tmp = my_strdup_cat(tmp, (char *) vect->items[i]);
		tmp = my_strdup_cat(tmp, " ");
		i++;
	}
	return (tmp);
}
