#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char ** av)
{
	int i;
 
	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			if ((av[1][i] >= 110 && av[1][i] <= 122) || (av[1][i] >= 78 && av[1][i] <= 90))
				ft_putchar(av[1][i] - 13);
			else if ((av[1][i] >= 97 && av[1][i] <= 109) || (av[1][i] >= 65 && av[1][i] <= 77))
					ft_putchar(av[1][i] + 13);
			else ft_putchar(av[1][i]);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
