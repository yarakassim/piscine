/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 11:43:36 by ykassim-          #+#    #+#             */
/*   Updated: 2021/02/20 16:22:28 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_prime(int nb)
{
	if (nb == 0 || nb == 1)
		return (0);
	int i;
	int j;
	i = 0;
	while (i < nb)
	{
		j = 0;
		while (j < nb)
		{
			if (i * j == nb)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
#include <stdio.h>
int main()
{
	printf("%d", ft_is_prime(21));
	return 0;
}
