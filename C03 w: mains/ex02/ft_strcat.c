/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 09:20:11 by ykassim-          #+#    #+#             */
/*   Updated: 2021/02/16 14:30:09 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
char	*ft_strcat(char *dest, char *src)
{
	int i;
	int c;

	i = 0;
	c = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[c])
	{
		dest[i] = src[c];
		i++;
		c++;
	}
	dest[i] = '\0';
	return (dest);
}
int main()
{
	char a[12] = "bon";
	char b[15] = "soir";
	strcat(a, b);
	printf("%s", a);
	return (0);
}
