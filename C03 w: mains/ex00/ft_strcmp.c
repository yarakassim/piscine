/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 13:46:54 by ykassim-          #+#    #+#             */
/*   Updated: 2021/02/16 09:13:51 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
int		main(int argc, char **argv)
{
	int res;

	res = 0;
	if (argc == 3)
	{
		res = ft_strcmp(argv[1], argv[2]);
		printf("%d\n", res);
		res = strcmp(argv[1], argv[2]);
		printf("%d", res);
	}
}
