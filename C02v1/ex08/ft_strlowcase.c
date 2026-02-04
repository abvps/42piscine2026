/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-viei <ana-viei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 16:56:58 by ana-viei          #+#    #+#             */
/*   Updated: 2026/02/04 17:00:00 by ana-viei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//nclude <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strlowcase(char *str);
/*
int	main(void)
{
	char str1[] = "HELLO!";
	char str2[] = "AbC123";
	char str3[] = "";

	printf("%s\n", ft_strlowcase(str1));
	printf("%s\n", ft_strlowcase(str2));
	printf("%s\n", ft_strlowcase(str3));
	return (0);
}
*/
