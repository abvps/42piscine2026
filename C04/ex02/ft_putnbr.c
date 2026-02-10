/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_putnbr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-viei <ana-viei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 18:19:07 by ana-viei          #+#    #+#             */
/*   Updated: 2026/02/10 11:28:05 by ana-viei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	n;

	n = nb;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + '0');
}

/*
int	main(void)
{
	write(1, "print positive: ", 16);
	ft_putnbr(42);

	write(1, "\nprint negative: ", 17);
	ft_putnbr(-42);

	write(1, "\nprint zero: ", 13);
	ft_putnbr(0);

	write(1, "\nprint max: ", 12);
	ft_putnbr(2147483647);

	write(1, "\nprint min: ", 12);
	ft_putnbr(-2147483648);

	write(1, "\n", 1);
	return (0);
}
*/