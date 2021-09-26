int	ft_isblank(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	ft_is_symbol(char c)
{
	if (c == '+' || c == '-')
		return (1);
	return (0);
}

int	ft_is_number(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int i;
	int sign;
	int resultat;

	i = 0;
	sign = 1;
	resultat = 0;
	while (ft_isblank(str[i]) == 1)
	{
		i++;
	}
	while (ft_is_symbol(str[i]) == 1)
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (ft_is_number(str[i]) == 1)
	{
		resultat = resultat * 10 + str[i] - 48;
		i++;
	}
	return (sign * resultat);
}

#include <stdio.h>

int main()
{
	printf("%d\n", ft_atoi("      ++-++++-------4637ghdgif875848"));
}
