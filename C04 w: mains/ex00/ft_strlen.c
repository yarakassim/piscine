/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 13:40:03 by ykassim-          #+#    #+#             */
/*   Updated: 2021/02/16 13:53:11 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
int main()
{
	int n;
	char a[34] = "goupi llon";
	n = strlen(a);
	printf("%d\n", n);
	n = ft_strlen(a);
	printf("%d", n);
}
