/*
** affichage.c for libC in /home/antiaskid/Documents/perso/C/libC_C_Epitech/affichage/
**
** Made by Antoine Briaux
** Login   <antoine.briaux@epitech.eu>
**
** Started on  Fri Feb 17 13:26:45 2017 Antoine Briaux
** Last update Fri Feb 17 13:31:26 2017 Antoine Briaux
*/

#include "parser.h"

void    my_putchar(char c)
{
    write(1, &c, 1);
}

void    my_putstr(char *str)
{
    write(1, str, my_strlen(str));
}

void    my_puterror(char *err)
{
    write(2, err, my_strlen(str));
}

void                my_putnbr(int nbr)
{
    unsigned int    u_nbr;
    if (nbr < 0)
    {
        u_nbr = nbr * -1;
        write(1, "-", 1);
    }
    else
        u_nbr = nbr;
    if (u_nbr > 10)
        my_putnbr(u_nbr / 10);
    my_putchar(u_nbr % 10 + '0');
}
