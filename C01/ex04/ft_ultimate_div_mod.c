/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-viei <ana-viei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 18:36:52 by ana-viei          #+#    #+#             */
/*   Updated: 2026/02/03 10:53:23 by ana-viei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		div;
	int		mod;

	if (*b != 0)
	{
		div = *a / *b;
		mod = *a % *b;
		*a = div;
		*b = mod;
	}
}
/*
int	main(void)
{
	int x = 17;
	int y = 5;

	ft_ultimate_div_mod(&x, &y);

	printf("Quociente (x): %d\n", x);
	printf("Resto (y): %d\n", y);

	return 0;
}
*/