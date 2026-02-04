/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-viei <ana-viei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 16:06:05 by ana-viei          #+#    #+#             */
/*   Updated: 2026/02/04 16:09:45 by ana-viei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//nclude <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}

int	ft_str_is_printable(char *str);
/*
int	main(void)
{
	printf("%d\n", ft_str_is_printable("Hello!"));
	printf("%d\n", ft_str_is_printable("123 ABC"));
	printf("%d\n", ft_str_is_printable("Hello\n"));
	printf("%d\n", ft_str_is_printable("\tABC"));
	printf("%d\n", ft_str_is_printable(""));
	return (0);
}
*/
