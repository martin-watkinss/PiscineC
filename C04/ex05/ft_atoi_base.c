/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwatkins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 23:28:22 by mwatkins          #+#    #+#             */
/*   Updated: 2021/08/15 15:07:38 by mwatkins         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
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
			if (str[i] == str[j] || str[i] == '\n' || str[i] == '\t'
				|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r'
				   	 || str[i] == ' ' || str[i] == '+' || str[i] == '-')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_atoi(char	*str)
{
	int	i;
	int	negatif;
	int	nb;

	i = 0;
	negatif = 1;
	nb = 0;
	while (str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			negatif *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - 48);
		i++;
	}
	return (nb * negatif);
}

int	ft_putnbr_base(int nb, char	*base)
{
	if (ft_erreur(base) == 1)
	{
		if (nb)
		{	
			ft_putnbr_base(nb / ft_strlen(base), base);
			nb = (nb % ft_strlen(base));
		}
		return (nb);
	}
	return (1);
}

int	ft_atoi_base(char	*str, char	*base)
{
	int	nb;

	nb = ft_atoi(str);
	ft_putnbr_base(nb, base);
	nb = base[nb];
	return (nb);
}
