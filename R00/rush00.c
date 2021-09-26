/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 15:40:09 by ykassim-          #+#    #+#             */
/*   Updated: 2021/02/07 16:18:20 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c);

void	display(char a, char b, int x)
{
	int counter;

	counter = 0;
	while (counter < x)
	{
		if ((x - counter == x) || (x - counter == 1))
		{
			putchar(a);
		}
		else
		{
			putchar(b);
		}
		counter++;
	}
}

void	rush(int x, int y)
{
	int counter_y;
	int counter_x;

	counter_y = 0;
	counter_x = 0;
	while (counter_y < y)
	{
		if ((y - counter_y == y) || (y - counter_y == 1))
		{
			display('o', '-', x);
		}
		else
		{
			counter_x = 0;
			display('|', ' ', x);
		}
		putchar('\n');
		counter_y++;
		counter_x = 0;
	}
}
