#include <unistd.h>

void	repeat(char letter)
{
	int counter;

	if (letter >= 'a' && letter <= 'z')
	{
		counter = letter - 96;
		while (counter > 0)
		{
			write(1, &letter, 1);
			counter--;
		}
	}
	else if (letter >= 'A' && letter <= 'Z')
	{
		counter = letter - 64;
		while (counter > 0)
		{
			write(1, &letter, 1);
			counter--;
		}
	}
}
int main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			if ((av[1][i] >= 'A' && av[1][i] <= 'Z') || (av[1][i] >= 'a' && av[1][i] <= 'z'))
				repeat(av[1][i]);
			else write(1, &av[1][i], 1);
			i++;
		}
	}

	write(1, "\n", 1);
	return (0);
}
