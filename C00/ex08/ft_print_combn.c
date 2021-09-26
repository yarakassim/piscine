/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 08:07:10 by ykassim-          #+#    #+#             */
/*   Updated: 2021/02/08 09:51:55 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char n)
{
	write(1, &n, 1);
}

void dis(char array[int a])
{
		if (a <= c)
			write(1, ", ", 1);
}

int counter(int n)
{
	int c;
	c = 0;
	while (n > 0)
	{
		n = n / 10;
		c++;
	}
	return c;
}

void intialize(int c)
{
	int a;
	a = 0;
	c = c - 1;
	char array[a];
	while (a <= c)
	{  
		array[a] = 48;
		a++;
	}
	a = 0;
}

void ft_print_combn(int n)
{
	if (n <= 0 || n >= 10)
	{
		write(1, "error, invalid number", 21);
		return 0;
	}
	counter(n);
	intialize(c);
	int d;
	d = 0;
	while (d <= c)
	{
		while (array[0] <= (9 - c))
		{
			ft_putchar(array[a]);
			array[a+1] = array[a] + 49;
			dis(array[a]);
			a++;
		}
		d++;
		a = 0;
	}
}

