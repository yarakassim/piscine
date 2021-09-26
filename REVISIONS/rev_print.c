#include <unistd.h>

int len(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int main(int ac, char **av)
{
	int s;

	if (ac == 2)
	{
		s = len(av[1]) - 1;
		while (s >= 0)
		{
			write(1, &av[1][s], 1);
			s--;
		}
	}
	write(1, "\n", 1);
	return (0);
}
