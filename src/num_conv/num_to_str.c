/*
** num_to_str.c for libC in /home/antiaskid/Documents/perso/C/libC_C_Epitech/num_conv/
**
** Made by Antoine Briaux
** Login   <antoine.briaux@epitech.eu>
**
** Started on  Thu Feb  9 18:25:23 2017 Antoine Briaux
** Last update Sun Feb 12 14:49:47 2017 Antoine Briaux
*/

int 		my_atoi(const char *str)
{
	int		nbr;
	int		i;
	char	neg;

	nbr = 0;
	neg = 0;
	i = -1;
	if (*str == '-')
	{
		neg = 1;
		i = 0;
	}
	while (str[++i])
		nbr = nbr * 10 + str[i] - '0';
	if (neg)
		nbr *= -1;
	return (nbr);
}

long 		my_atol(const char *str)
{
	long	nbr;
	int		i;
	char	neg;

	nbr = 0;
	neg = 0;
	i = -1;
	if (*str == '-')
	{
		neg = 1;
		i = 0;
	}
	while (str[++i])
		nbr = nbr * 10 + str[i] - '0';
	if (neg)
		nbr *= -1;
	return (nbr);
}

long long		my_atoll(const char *str)
{
	long long	nbr;
	int			i;
	char		neg;

	nbr = 0;
	neg = 0;
	i = -1;
	if (*str == '-')
	{
		neg = 1;
		i = 0;
	}
	while (str[++i])
		nbr = nbr * 10 + str[i] - '0';
	if (neg)
		nbr *= -1;
	return (nbr);
}

float 		my_atof(const char *str)
{
	float	nbr;
	float	fact;
	int		point;

	nbr = 0;
	fact = 1;
	point = 0;
	if (*str == '-')
	{
		str++;
		fact = -1;
	}
	while (*str)
	{
		if (*str == '.')
			point = 1;
		if (*str - '0' >= 0 && *str - '0' <= 9)
		{
			if (point)
				fact /= 10.;
			nbr = nbr * 10. + (float) *str - '0';
		}
		str++;
	}
	return (nbr * fact);
}
