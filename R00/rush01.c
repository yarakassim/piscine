/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 11:07:08 by yhwang            #+#    #+#             */
/*   Updated: 2021/02/07 16:16:51 by yhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c);

void	putchar_error(void)
{
	write(1, "Be careful! Number is invalid!\n", 31);
}

void	display_f(int counter, int x)
{
	while (counter < x)
	{
		if (x - counter == x)
			putchar('/');
		else if (x - counter == 1)
			putchar('\\');
		else
			putchar('*');
		counter++;
	}
}

void	display_m(int counter, int x)
{
	while (counter < x)
	{
		if (x - counter == x)
			putchar('*');
		else if (x - counter == 1)
			putchar('*');
		else
			putchar(' ');
		counter++;
	}
}

void	display_l(int counter, int x)
{
	while (counter < x)
	{
		if (x - counter == x)
			putchar('\\');
		else if (x - counter == 1)
			putchar('/');
		else
			putchar('*');
		counter++;
	}
}

void	rush(int x, int y)
{
	int counter_y;
	int counter_x;

	counter_y = 0;
	counter_x = 0;
	if (x < 0 || y < 0 || x > 32766 || y > 32766)
	{
		putchar_error();
		return ;
	}
	while (counter_y < y)
	{
		if (y - counter_y == y)
			display_f(counter_x, x);
		else if (y - counter_y == 1)
			display_l(counter_x, x);
		else
			display_m(counter_x, x);
		putchar('\n');
		counter_y++;
		counter_x = 0;
	}
}
