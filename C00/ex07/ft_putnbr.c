/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 13:42:10 by ykassim-          #+#    #+#             */
/*   Updated: 2021/02/10 11:54:37 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char n)
{
	write(1, &n, 1);
}

void	ft_putnbr(int nb)
{
	int nbr;

	nbr = nb;
	if (nb == -2147483648)
	{
		write(1, "-2", 2);
		ft_putnbr(147483648);
	}
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nbr = -nb;
		}
		if (nbr >= 10)
		{
			ft_putnbr(nbr / 10);
			ft_putchar(nbr % 10 + '0');
		}
		else
		{
			ft_putchar(nbr + '0');
		}
	}
}
