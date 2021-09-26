#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char *dest;
	int len = 0;

	while (src[len])
		len++;
	if (!(dest = malloc(sizeof(char) * len + 1)))
		return (NULL);
	src[len] = '\0';
	while (len >= 0)
	{
		dest[len] = src[len];
		len--;
	}
	return (dest);
}

#include <stdio.h>

int main()
{
	char a[10] = "123456789";
	printf("%s", ft_strdup(a));
}
