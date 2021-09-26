/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 16:57:13 by ykassim-          #+#    #+#             */
/*   Updated: 2021/02/21 08:13:59 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_blank(char *str, int i)
{
	if (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		return (1);
	return (0);
}

int	ft_is_sign(char *str, int i)
{
	if (str[i] == 43 || str[i] == 45)
		return (1);
	return (0);
}

int	ft_is_nb(char *str, int i)
{
	if (str[i] >= 48 && str[i] <= 57)
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int i;
	int sign;
	int n;

	i = 0;
	sign = 1;
	n = 0;
	while (ft_is_blank(str, i) == 1)
		i++;
	while (ft_is_sign(str, i) == 1)
	{
		if (str[i] == 45)
			sign = -sign;
		i++;
	}
	while (ft_is_nb(str, i) == 1)
	{
		n = n * 10 + str[i] - 48;
		i++;
	}
	return (sign * n);
}

#include <stdio.h>
int		main(int argc, char **argv)
{
	int r;
	if (argc == 2)
	{
		r = ft_atoi(argv[1]);
		printf("%d", r);
	}
}
