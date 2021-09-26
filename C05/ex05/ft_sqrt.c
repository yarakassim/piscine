/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykassim- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 10:34:15 by ykassim-          #+#    #+#             */
/*   Updated: 2021/02/21 10:07:38 by ykassim-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int o;

	o = 0;
	if (nb < 0)
		return (0);
	if (nb == 1)
		return (1);
	while (o <= nb / 2 && o <= 46340)
	{
		if (o * o == nb)
			return (o);
		o++;
	}
	return (0);
}
