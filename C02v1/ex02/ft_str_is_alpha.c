/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-viei <ana-viei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 14:22:27 by ana-viei          #+#    #+#             */
/*   Updated: 2026/02/04 15:28:48 by ana-viei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//nclude <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int		i;

	i = 0;
	if (str[i] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= 'a' && str[i] <= 'z')))
			return (0);
		i++;
	}
	return (1);
}

/*
int main(void)
{
    printf("%d\n", ft_str_is_alpha("Hello"));
    printf("%d\n", ft_str_is_alpha("Hello123"));
    printf("%d\n", ft_str_is_alpha(""));
    printf("%d\n", ft_str_is_alpha("abcXYZ"));
    printf("%d\n", ft_str_is_alpha("!@#"));
    return 0;
}
*/