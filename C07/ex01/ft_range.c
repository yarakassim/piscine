/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:07:52 by ykassim-          #+#    #+#             */
/*   Updated: 2021/02/23 14:49:17 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *array;
	int i;

	i = 0;
	if (min >= max)
		return (NULL);
	array = malloc(sizeof(int)*(max - min));
	while (min < max)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}
int main()
{
	printf("%d", ft_range(2, 5678945)[5678943]);
	return 0;
}
