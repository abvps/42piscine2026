/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-viei <ana-viei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 09:25:22 by ana-viei          #+#    #+#             */
/*   Updated: 2026/02/12 10:29:33 by ana-viei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)

{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*
int	main(void)
{
	int i;

	for (i = 0; i <= 10; i++)
	{
		printf("Fibonacci(%d) = %d\n", i, ft_fibonacci(i));
	}

	printf("Fibonacci(8) = %d\n", ft_fibonacci(8));

	return (0);
}
*/