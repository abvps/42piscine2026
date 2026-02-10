/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-viei <ana-viei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 11:59:55 by ana-viei          #+#    #+#             */
/*   Updated: 2026/02/10 14:00:24 by ana-viei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
/*
int	main(void)
{
	int	nb;

	nb = 5;
	printf("%d = %d\n", nb, ft_iterative_factorial(nb));

	nb = 0;
	printf("%d = %d\n", nb, ft_iterative_factorial(nb));

	nb = -3;
	printf("%d = %d\n", nb, ft_iterative_factorial(nb));

	return (0);
}
*/
