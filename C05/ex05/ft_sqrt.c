/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-viei <ana-viei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 10:31:18 by ana-viei          #+#    #+#             */
/*   Updated: 2026/02/12 10:44:24 by ana-viei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	if (nb <= 0)
		return (0);
	i = 1;
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

/*
int	main(void)
{
	printf("ft_sqrt(16) = %d\n", ft_sqrt(16));
	printf("ft_sqrt(20) = %d\n", ft_sqrt(20));
	printf("ft_sqrt(25) = %d\n", ft_sqrt(25));
	printf("ft_sqrt(-4) = %d\n", ft_sqrt(-4));
	return (0);
}
*/