#include <unistd.h>

int	dub(char *str, char c, int index)
{
	int i;

	i = 0;
	while (i < index)
	{
		if (str[i] == c)
			return 0;
		i++;
	}
	return 1;
}

void	inter(char *s1, char *s2)
{
	int i = 0;
	int j;

	while(s1[i])
	{
		if (dub(s1, s1[i], i))
		{
			j = 0;
			while (s2[j])
			{
				if (s1[i] == s2[j])
				{
					write(1, &s1[i], 1);
					break;
				}
				j++;
			}
		}
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac == 3)
	{
		inter(av[1], av [2]);
	}
	write(1, "\n", 1);
	return 0;
}
