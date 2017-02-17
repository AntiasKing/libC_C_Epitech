##
## Makefile for libC in /home/antiaskid/Documents/perso/C/libC_C_Epitech/
##
## Made by Antoine Briaux
## Login   <antoine.briaux@epitech.eu>
##
## Started on  Fri Feb 17 13:34:20 2017 Antoine Briaux
## Last update Fri Feb 17 13:53:19 2017 Antoine Briaux
##

CC = gcc
RM = rm -f
MD = mkdir
CP = cp -R
MV = mv

CFLAGS = -W -Wextra -Wall -Iinc

SRCS = 	src/affichage/affichage.c	\
		src/num_conv/num_to_str.c	\
		src/parser/my_strtok.c		\
		src/parser/parsing.c		\
		src/parser/parsing.c		\
		src/parser/str_to_wordtab.c	\
		src/parser/string_info.c	\
		src/parser/string_info2.c	\
		src/parser/string_info3.c

OBJS = $(SRCS:.c=.o)

NAME = libmy.a

DIR_SRC = src

DIR_INC = inc

DIR = lib

lib: $(OBJS)
	ar rc $(NAME) $(OBJS)
	$(MK) $(DIR)
	$(CP) $(DIR_SRC) $(DIR)
	$(CP) $(DIR_INC) $(DIR)
	$(MV) $(NAME) $(DIR)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean lib
