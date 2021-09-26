/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 17:06:29 by yhwang            #+#    #+#             */
/*   Updated: 2021/02/07 17:17:26 by yhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c);

void	putchar_error(void)
{
	write(1, "Be careful! Number is invalid\n", 31);
}

void	display_fl(int counter, int x)
{
	while (counter < x)
	{
		if (x - counter == x)
			putchar('A');
		else if (x - counter == 1)
			putchar('C');
		else
			putchar('B');
		counter++;
	}
}

void	display_m(int counter, int x)
{
	while (counter < x)
	{
		if (x - counter == x)
			putchar('B');
		else if (x - counter == 1)
			putchar('B');
		else
			putchar(' ');
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
			display_fl(counter_x, x);
		else if (y - counter_y == 1)
			display_fl(counter_x, x);
		else
			display_m(counter_x, x);
		putchar('\n');
		counter_y++;
		counter_x = 0;
	}
}
