/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 16:22:00 by ykassim-          #+#    #+#             */
/*   Updated: 2021/02/22 15:39:41 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_prime(int nb)
{
	unsigned int i;

	i = 3;
	if (nb < 3 || !(nb % 2))
		return (nb == 2);
	while (i * i <= (unsigned int)nb)
	{
		if (!(nb % i))
			return (0);
		i += 2;
	}
	return (1);
}
#include <stdio.h>
int main()
{
	printf("%d", ft_is_prime(2));
	return 0;
}
