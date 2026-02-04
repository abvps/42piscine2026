/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-viei <ana-viei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 19:58:43 by ana-viei          #+#    #+#             */
/*   Updated: 2026/02/03 10:53:15 by ana-viei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}

/*
int main(void)
{
    int tab[] = {1, 2, 3, 4, 5};
    int size;
    int i;

    size = 5;

    printf("Array original:\n");
    i = 0;
    while (i < size)
    {
        printf("%d ", tab[i]);
        i++;
    }

    ft_rev_int_tab(tab, size);

    printf("\n\nArray invertido:\n");
    i = 0;
    while (i < size)
    {
        printf("%d ", tab[i]);
        i++;
    }

    printf("\n");
    return 0;
}
	*/