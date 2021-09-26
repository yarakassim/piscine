/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 09:11:32 by ykassim-          #+#    #+#             */
/*   Updated: 2021/02/21 09:37:28 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * (ft_recursive_power(nb, (power - 1))));
}
#include <stdio.h>
int main()
{
	int n;
	int p;
	n = 2;
	p = -5;
	printf("%d", ft_recursive_power(n, p));
	return 0;
}
