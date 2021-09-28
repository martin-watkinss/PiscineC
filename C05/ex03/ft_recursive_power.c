/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwatkins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 21:05:16 by mwatkins          #+#    #+#             */
/*   Updated: 2021/08/15 21:12:29 by mwatkins         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int	nb, int	power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
	{
		nb = nb * ft_recursive_power(nb, power - 1);
		return (nb);
	}
}
