/*
** parser.h for libC in /home/antiaskid/Documents/perso/C/libC_C_Epitech/inc/
**
** Made by Antoine Briaux
** Login   <antoine.briaux@epitech.eu>
**
** Started on  Wed Feb  8 15:12:55 2017 Antoine Briaux
** Last update Sun Mar 19 18:01:24 2017 Antoine Briaux
*/

#ifndef __PARSER__
# define __PARSER__

char 			*my_strcat(char *dest, const char *src);
char			*my_strncat(char *dest, const char *src, int n);
char			*my_strdup_cat(const char *str1, const char *str2);
char			*my_strcpy(char *dest, const char *src);
char			*my_strncpy(char *dest, const char *src, int n);
unsigned int 	my_strxfrm(char *dest, const char *src, int n);

int		my_strlen(const char *str);
int 	my_strcmp(const char *str1, const char *str2);
int 	my_strncmp(const char *str1, const char *str2, const int n);
int 	my_strcoll(const char *str1, const char *str2);
char	*my_strchr(const char *str, const int x);
char	*my_strpbrk(const char *str, const char *accept);
char 	*my_strrchr(const char *str, const int c);
int		check_char(char c, char *str);
int		my_strspn(const char *str1, const char *str2);
int 	my_strcspn(const char *str1, const char *str2);
char 	*my_strdup(const char *str);
char 	*my_strndup(const char *str, const unsigned int n);
char 	*my_strtok(char *str, char *delim);
char    **str_to_wordtab(char *str, char *delim);
char 	*my_strstr(const char *str1, const  char *str2);

#endif /* !__PARSER__ */
