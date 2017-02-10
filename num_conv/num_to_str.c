/*
** num_to_str.c for libC in /home/antiaskid/Documents/perso/C/libC_C_Epitech/num_conv/
**
** Made by Antoine Briaux
** Login   <antoine.briaux@epitech.eu>
**
** Started on  Thu Feb  9 18:25:23 2017 Antoine Briaux
** Last update Thu Feb  9 18:44:27 2017 Antoine Briaux
*/

int 	my_atoi(const char *str)
{
	int	nbr;
	int	i;

	nbr = 0;
	i = -1;
	while (str[++i])
	{
		nbr *= 10;
		nbr += str[i] - '0';
	}
	return (nbr);
}

long 		my_atol(const char *str)
{
	long	nbr;
	int		i;

	nbr = 0;
	i = -1;
	while (str[++i])
	{
		nbr *= 10;
		nbr += str[i] - '0';
	}
	return (nbr);
}

long long		my_atoll(const char *str)
{
	long long	nbr;
	int			i;

	nbr = 0;
	i = -1;
	while (str[++i])
	{
		nbr *= 10;
		nbr += str[i] - '0';
	}
	return (nbr);
}

float 		my_atof(const char *str)
{
	float 	nbr;
	int		mod;
	int		i;

	i = -1;
	nbr = 0;
	mod = 1;
	while (str[++i])
	{
		printf("%d\n", i);
		if (str[i] == '.')
			mod = 10;
		else
		{
			nbr *= 10;
			nbr += (str[i] - '0') / mod;
		}
	}
	return (nbr);
}
