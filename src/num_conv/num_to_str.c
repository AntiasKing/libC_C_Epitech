/*
** num_to_str.c for lib_C in /home/antiaskid/Documents/B2/PSU/PSU_2016_tetris/lib/src/num_conv/
**
** Made by Antoine Briaux
** Login   <antoine.briaux@epitech.eu>
**
** Started on  Sat Mar 18 15:22:30 2017 Antoine Briaux
** Last update Sun Mar 19 20:02:22 2017 Antoine Briaux
*/

int 	my_atoi(char *str)
{
	int neg;
	int nbr;

	neg = 0;
	while (*str == '-')
	{
		str++;
		neg++;
	}
	nbr = 0;
	while (*str >= '0' && *str <= '9')
	{
		nbr = nbr * 10 + *str - '0';
		str++;
	}
	if (!(neg % 2))
		return (nbr);
	else
		return (-nbr);
}
