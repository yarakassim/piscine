/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 08:47:23 by ykassim-          #+#    #+#             */
/*   Updated: 2021/02/21 09:05:37 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;
	int factorial;

	i = 0;
	factorial = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (i < nb)
	{
		factorial = factorial * (nb - i);
		i++;
	}
	return (factorial);
}
