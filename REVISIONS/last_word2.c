#include <unistd.h>

int ft_isspace(char c)
{
	if (c == 32 || c == '\t')
		return 1;
	return 0;
}

void	last(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	i = i - 1;
	while (str[i] && ft_isspace(str[i]))
		i--;
	while (str[i] && (!(ft_isspace(str[i]))))
		i--;
	i = i + 1;
	while (str[i] && (!(ft_isspace(str[i]))))
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		last(av[1]);
	}
	write(1, "\n", 1);
	return 0;
}
