/*
** test_parsing.c for libC in /home/antiaskid/Documents/perso/C/libC_C_Epitech/test/
**
** Made by Antoine Briaux
** Login   <antoine.briaux@epitech.eu>
**
** Started on  Wed Feb  8 15:04:23 2017 Antoine Briaux
** Last update Wed Feb 22 17:53:27 2017 Antoine Briaux
*/

#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "parser.h"
#include "num_to_str.h"

int 		main()
{
	char	*dest;
	// char	*src = "la libC.";
	//
	// dest = malloc(100);
	// dest = strcat(dest, "Bonjour ");
	// printf("strcat: %s\nmy_strcat: %s\n", strcat(dest, src), my_strcat(dest, src));
	// printf("strncat: %s\nmy_strncat: %s\n", strncat(dest, src, 3), my_strncat(dest, src, 3));
	// printf("strcpy: %s\nmy_strcpy: %s\n", strcpy(dest, src), my_strcpy(dest, src));
	// printf("strncpy: %s\nmy_strncpy: %s\n", strncpy(dest, src, 3), my_strncpy(dest, src, 3));
	// dest = malloc(100);
	// dest = my_strcpy(dest, "AZERTYUHZISdzefiieufizefh");
	// printf("strxfrm: %d\nmy_strxfrm: %d\n", strxfrm(dest, src, 3), my_strxfrm(dest, src, 3));
	// printf("src: %s\ndest: %s\n", src, dest);
	//
	// printf("strcmp: %d\nmy_strcmp: %d\n", strcmp("aBCD", "ABCD"), my_strcmp("aBCD", "ABCD"));
	// printf("strncmp: %d\nmy_strncmp: %d\n", strncmp("aBCD", "ABCD", 3), my_strncmp("aBCD", "ABCD", 3));
	// printf("strcoll: %d\nmy_strcoll: %d\n", strcoll("aBCD", "ABCD"), my_strcoll("aBCD", "ABCD"));
	// printf("strchr: %s\nmy_strchr: %s\n", strchr("aBCD", 'B'), my_strchr("aBCD", 'B'));
	// printf("strrchr: %s\nmy_strrchr: %s\n", strrchr("ACCD", 'c'), my_strrchr("ACCD", 'c'));
	// printf("strspn: %d\nmy_strspn: %d\n", strspn("ABCD", "ABcD"), my_strspn("ABCD", "ABcD"));
	// printf("strcspn: %d\nmy_strcspn: %d\n", strcspn("aBCD", "ABcD"), my_strcspn("aBCD", "ABcD"));
	// printf("strstr: %s\nmy_strstr: %s\n", strstr("ABCDE", "c"), my_strstr("ABCDE", "c"));
	// printf("strpbrk: %s\nmy_strpbrk: %s\n", strpbrk("LOLdeolde", "olde"), my_strpbrk("LOLdeolde", "olde"));

	// printf("strdup: Lololo %s\nmy_strdup: Lololo %s\n", strdup("Lololo\0"), my_strdup("Lololo"));
	// char src[] = "LASHIDZHAIHDdiehdzediiedh,dezhdihzeid dheuihd dehiu	deuih	dheiuhd	hui	uih	ih	hiuhui	uih	uh	idehdziuhduizehzeuihzehiuiehi";
	// dest = my_strtok(src, " ,	");
	// printf("%s\n", dest);
	// while ((dest = my_strtok(NULL, " ,	")) != NULL)
	// {
	// 	printf("%s\n", dest);
	// 	free(dest);
	// }
	//
	// // printf("%d, %li, %lli, %f\n", my_atoi("-123456"), my_atol("-123456789"), my_atoll("-234567895432"), my_atof("123.456"));
	// char 	**wordtab;
	// char	str[] = "BAUYEHIUSI  szshzihs,dedhiesoja	    	sziuh	oisjzo ";
	// int		i = -1;
	//
	// wordtab = str_to_wordtab(str, ",	 ");
	// while (wordtab[++i] != NULL)
	// 	printf("%s\n", wordtab[i]);
	my_putnbr(12345);
	return (0);
}
