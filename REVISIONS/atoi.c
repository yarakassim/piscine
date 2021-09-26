#include <stdio.h>

int	check_space(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return 1;
	return 0;
}

int	ft_atoi(const char *str)
{
	int i = 0;
	long n = 0;
	int sign = 1;

	while (check_space(str[i]))
		i++;
	if (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			sign = -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		n = n * 10 + str[i] - 48;
		i++;
	}
	return (n * sign);
}
int main()
{
	int v;
	const char str[22] = "    -2345ba";

	v = ft_atoi(str); 
	printf("%d", v);
}
