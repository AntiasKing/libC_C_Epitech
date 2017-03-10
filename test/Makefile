##
## Makefile for libC in /home/antiaskid/Documents/perso/C/libC_C_Epitech/test/
##
## Made by Antoine Briaux
## Login   <antoine.briaux@epitech.eu>
##
## Started on  Wed Feb  8 15:07:11 2017 Antoine Briaux
## Last update Wed Feb 22 18:01:35 2017 Antoine Briaux
##

CC = gcc

RM = rm -f

CFLAGS += -W -Wall -Wextra -g3 -I../inc

SRCS = 	../src/parser/parsing.c	\
		../src/parser/string_info.c \
		../src/parser/string_info2.c \
		../src/parser/string_info3.c \
		../src/parser/my_strtok.c \
		../src/parser/str_to_wordtab.c \
		../src/num_conv/num_to_str.c \
		../src/affichage/affichage.c 	\
		test_parsing.c

OBJS = $(SRCS:.c=.o)

NAME = test

all: $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
