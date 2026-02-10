/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-viei <ana-viei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 14:14:25 by ana-viei          #+#    #+#             */
/*   Updated: 2026/02/10 15:43:49 by ana-viei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)

{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (power > 0)
	{
		i = i * nb;
		power --;
	}
	return (i);
}
/*
int main(void)
{
	int nb = 2;
	int power = 4;
	printf("%d\n", ft_iterative_power(nb, power));
	return (0);
}
*/