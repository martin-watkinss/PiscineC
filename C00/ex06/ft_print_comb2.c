/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwatkins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 21:10:45 by mwatkins          #+#    #+#             */
/*   Updated: 2021/08/07 19:18:39 by mwatkins         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnumbers(int c)
{
	 write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a;
		while (b <= 99)
		{
			if (a != b)
			{
				ft_putnumbers((a / 10) + '0');
				ft_putnumbers((a % 10) + '0');
				ft_putnumbers(' ');
				ft_putnumbers((b / 10) + '0');
				ft_putnumbers((b % 10) + '0');
				if (!(a == 98 && b == 99))
					write(1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}
