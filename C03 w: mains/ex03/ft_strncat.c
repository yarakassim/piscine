/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 10:12:47 by ykassim-          #+#    #+#             */
/*   Updated: 2021/02/16 16:35:32 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int i;
	unsigned int c;

	i = 0;
	c = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[c] && c < nb)
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
	int n;
	char a[21] = "bon";
	char b[5] = "soirr";
	n = 7;
	ft_strncat(a, b, n);
	printf("%s", a);
}
