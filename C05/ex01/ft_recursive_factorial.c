/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-viei <ana-viei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 14:02:21 by ana-viei          #+#    #+#             */
/*   Updated: 2026/02/10 14:58:07 by ana-viei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

/*
int	main(void)
{
	printf("-1 = %d\n", ft_recursive_factorial(-1));
	printf("0 = %d\n", ft_recursive_factorial(0));
	printf("5 = %d\n", ft_recursive_factorial(5));
	printf("1 = %d\n", ft_recursive_factorial(1));
}
*/