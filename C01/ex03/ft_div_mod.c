/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-viei <ana-viei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 22:17:15 by ana-viei          #+#    #+#             */
/*   Updated: 2026/02/03 10:53:26 by ana-viei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

/*
int main ()
{
	int a = 17;
	int b = 5;
	int div;
	int mod;

	ft_div_mod(a, b, &div, &mod);

	printf("Quociente: %d\n", div);
	printf("Resto: %d\n", mod);
	return 0;
}
s*/
