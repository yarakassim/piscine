/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 08:37:09 by ykassim-          #+#    #+#             */
/*   Updated: 2021/02/21 09:28:41 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	else 
		return (nb * ft_recursive_factorial(nb - 1));
}
#include <stdio.h>
int	main()
{
	int n;
	n = 8;
	printf("%d", ft_recursive_factorial(n));
	return (0);
}

