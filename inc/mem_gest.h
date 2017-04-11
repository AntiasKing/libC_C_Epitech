/*
** mem_gest.h for lib_C in /home/antiaskid/Documents/B2/PSU/PSU_2016_minishell2/lib/inc/
**
** Made by Antoine Briaux
** Login   <antoine.briaux@epitech.eu>
**
** Started on  Mon Mar 20 18:41:18 2017 Antoine Briaux
** Last update Fri Mar 24 16:45:20 2017 Antoine Briaux
*/

#ifndef __MEM_GEST__
# define __MEM_GEST__

void my_memset(void *src, int value, int size);
void my_memcpy(void *dest, void *src, int size);
void *my_realloc(void *ptr, int new_size, int old_size);

#endif /* ! __MEM_GEST__ */
