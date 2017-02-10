##
## Makefile for libC in /home/antiaskid/Documents/perso/C/libC_C_Epitech/test/
##
## Made by Antoine Briaux
## Login   <antoine.briaux@epitech.eu>
##
## Started on  Wed Feb  8 15:07:11 2017 Antoine Briaux
## Last update Thu Feb  9 18:32:15 2017 Antoine Briaux
##

CC = gcc

RM = rm -f

CFLAGS += -W -Wall -Wextra -g3 -I../inc

SRCS = 	../parser/parsing.c	\
		../parser/string_info.c \
		../parser/string_info2.c \
		../parser/string_info3.c \
		../parser/my_strtok.c \
		../num_conv/num_to_str.c \
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
