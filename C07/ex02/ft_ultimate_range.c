/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 13:55:46 by ykassim-          #+#    #+#             */
/*   Updated: 2021/02/24 08:06:43 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	if (min >= max)
		return (0);
	int i;

	i = 0;
	*range = malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		*range[i] = min;
		min++;
		i++;
	}
	return (i);
}
int main()
{
	int **tab = 0;

	printf("%d", ft_ultimate_range(tab, 6, 7));
}
