/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-viei <ana-viei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 17:01:10 by ana-viei          #+#    #+#             */
/*   Updated: 2026/02/04 17:18:28 by ana-viei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		// Primeira letra da string ou após caractere não alfanumérico
		if ((i == 0 && ((str[i] >= 'a' && str[i] <= 'z') 
				|| (str[i] >= 'A' && str[i] <= 'Z'))) 
			|| ((str[i] >= 'a' && str[i] <= 'z') 
				&& !( (str[i - 1] >= 'a' && str[i - 1] <= 'z')
					|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
					|| (str[i - 1] >= '0' && str[i - 1] <= '9'))))
			str[i] = str[i] - 32; // converte para maiúscula

		// Letras maiúsculas no meio da palavra → minúsculas
		else if (str[i] >= 'A' && str[i] <= 'Z' 
			&& i != 0 
			&& ((str[i - 1] >= 'a' && str[i - 1] <= 'z')
				|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
				|| (str[i - 1] >= '0' && str[i - 1] <= '9')))
			str[i] = str[i] + 32;

		i++;
	}
	return (str);
}
#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char str[] = "ola, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";

	printf("%s\n", ft_strcapitalize(str));
	return (0);
}

