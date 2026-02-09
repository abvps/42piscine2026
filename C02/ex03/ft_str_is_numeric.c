/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-viei <ana-viei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 15:29:59 by ana-viei          #+#    #+#             */
/*   Updated: 2026/02/04 15:51:34 by ana-viei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//nclude <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}
/*
int main(void)
{
    printf("%d\n", ft_str_is_numeric("34567"));
    printf("%d\n", ft_str_is_numeric("llo123"));
    printf("%d\n", ft_str_is_numeric(""));
    return 0;
}
*/
