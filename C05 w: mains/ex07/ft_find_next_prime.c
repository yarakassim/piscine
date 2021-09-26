/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 14:19:29 by ykassim-          #+#    #+#             */
/*   Updated: 2021/02/22 15:41:20 by ykassim-         ###   ########.fr       */
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

int ft_find_next_prime(int nb)
{
	while (!(ft_is_prime(nb)))
		nb++;
	return (nb);
}

#include <stdio.h>
int main()
{
	printf("%d", ft_find_next_prime(954));
	return 0;
}
