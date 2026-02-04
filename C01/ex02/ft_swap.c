/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-viei <ana-viei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 21:47:22 by ana-viei          #+#    #+#             */
/*   Updated: 2026/02/03 14:16:42 by ana-viei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int		tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/*
 int main(void)
{
    int x = 3;
    int y = 7;

    printf("Antes: x=%d, y=%d\n", x, y);
    ft_swap(&x, &y);
    printf("Depois: x=%d, y=%d\n", x, y);

    return 0;
} 
*/