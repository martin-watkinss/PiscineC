/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwatkins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 16:24:12 by mwatkins          #+#    #+#             */
/*   Updated: 2021/08/15 16:53:37 by mwatkins         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_erreur(char	*str)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(str) < 2)
	{
		ft_strlen(str);
		return (0);
	}
	while (str[i] != '\0')
	{
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j] || str[i] == '+' || str[i] == '-')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nb, char	*base)
{
	if (ft_erreur(base) == 1)
	{
		if (nb == -2147483648 && ft_strlen(base) == 10)
		{
			write(1, "-2147483648", 11);
			return ;
		}
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
		if (nb)
		{
			ft_putnbr_base(nb / ft_strlen(base), base);
			nb = (nb % ft_strlen(base));
			ft_putchar(base[nb]);
		}
	}
}
