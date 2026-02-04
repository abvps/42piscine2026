/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-viei <ana-viei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 10:22:59 by ana-viei          #+#    #+#             */
/*   Updated: 2026/02/03 11:09:45 by ana-viei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int		i;
	int		j;
	int		temp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

/*
int main(void)
{
    int tab[] = {4, 2, 5, 1, 3};
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

    ft_sort_int_tab(tab, size);

    printf("\n\nArray ordenado em ordem crescente:\n");
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
