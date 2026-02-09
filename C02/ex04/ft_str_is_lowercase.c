/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-viei <ana-viei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 15:53:27 by ana-viei          #+#    #+#             */
/*   Updated: 2026/02/04 15:56:38 by ana-viei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//nclude <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}

/*
int	ft_str_is_lowercase(char *str);

int	main(void)
{
	printf("%d\n", ft_str_is_lowercase("abc"));
	printf("%d\n", ft_str_is_lowercase("abC"));
	printf("%d\n", ft_str_is_lowercase("abc123"));
	printf("%d\n", ft_str_is_lowercase(""));
	return (0);
}
*/