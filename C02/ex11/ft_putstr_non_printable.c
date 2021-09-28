/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwatkins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 02:20:48 by mwatkins          #+#    #+#             */
/*   Updated: 2021/08/11 19:31:06 by mwatkins         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char	*str)
{
	int		i;
	char	a;
	char	b;
	int		tempo;
	char	*hex;

	hex = "0123456789abcdef";
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] < 127)
			write(1, &str[i], 1);
		else
		{
			tempo = (unsigned char)str[i];
			a = hex[tempo / 16];
			b = hex[tempo % 16];
			write(1, "\\", 1);
			write(1, &a, 1);
			write(1, &b, 1);
		}
		i++;
	}
}
