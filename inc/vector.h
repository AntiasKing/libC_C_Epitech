/*
** vector.h for lib_C in /home/antiaskid/Documents/B2/PSU/PSU_2016_minishell2/lib/inc/
**
** Made by Antoine Briaux
** Login   <antoine.briaux@epitech.eu>
**
** Started on  Mon Mar 20 17:21:29 2017 Antoine Briaux
** Last update Thu Apr  6 15:24:36 2017 Antoine Briaux
*/

#ifndef __MY_VECTOR__
# define __MY_VECTOR__
# define INIT_SIZE 5

typedef struct 		s_vector
{
	void 			**items;
	unsigned int 	size;
	unsigned int 	nbr_elem;
}					t_vector;

void 	init_vector(t_vector *vect);
void 	vector_resize(t_vector *vect, unsigned int size);
void 	add_end_vector(void *item, t_vector *vect);
char 	*split_vector(t_vector *, t_vector *, t_vector *, int);
char 	*vect_to_str(t_vector *vect);
void 	delete_vector(t_vector *vect, int index);
void 	free_vector(t_vector *vect);

#endif /* ! __MY_VECTOR__ */
