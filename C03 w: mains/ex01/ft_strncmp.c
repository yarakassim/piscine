/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 09:32:07 by ykassim-          #+#    #+#             */
/*   Updated: 2021/02/16 09:39:46 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;
	i = 0;
	while ((s1[i] || s2[i]) && n > 0)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
		n--;
	}
	return (0);
}
int main(int ac, char **av)
{
	unsigned int num;
	int res;
	res = 0;
	num = 5;
	if (ac == 3)
	{
		res = ft_strncmp(av[1], av[2], num);
	}
	printf("%d\n", res);
	if (ac == 3)
	{
		res = strncmp(av[1], av[2], num);
	}
	printf("%d", res);
}
