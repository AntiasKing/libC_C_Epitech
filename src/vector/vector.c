/*
** vector.c for lib_C in /home/antiaskid/Documents/B2/PSU/PSU_2016_minishell2/lib/src/vector/
**
** Made by Antoine Briaux
** Login   <antoine.briaux@epitech.eu>
**
** Started on  Mon Mar 20 17:24:57 2017 Antoine Briaux
** Last update Thu Apr  6 14:15:19 2017 Antoine Briaux
*/

# include <stdlib.h>
# include "mem_gest.h"
# include "vector.h"

void 		init_vector(t_vector *vect)
{
	vect->size = INIT_SIZE;
	vect->nbr_elem = 0;
	if (!(vect->items = malloc(sizeof(void *) * INIT_SIZE)))
		return ;
}

void 		vector_resize(t_vector *vect, unsigned int size)
{
	void 	**new_items;

	if (!(new_items = my_realloc(vect->items, sizeof(void *) * size,
		sizeof(void *) * vect->nbr_elem)))
		return ;
	vect->items = new_items;
	vect->size = size;
}

void		add_end_vector(void *item, t_vector *vect)
{
	if (vect->nbr_elem == vect->size)
		vector_resize(vect, vect->size * 2);
	vect->items[vect->nbr_elem++] = item;
}

void 		delete_vector(t_vector *vect, int index)
{
	int 	i;

	if (index < 0 || (unsigned) index > vect->nbr_elem)
		return ;
	i = index + 1;
	while ((unsigned) i < vect->nbr_elem)
	{
		vect->items[i - 1] = vect->items[i];
		i++;
	}
	vect->nbr_elem--;
}

void 	free_vector(t_vector *vect)
{
	if (vect->items)
		free(vect->items);
}
