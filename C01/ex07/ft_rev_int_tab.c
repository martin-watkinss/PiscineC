/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwatkins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 16:46:57 by mwatkins          #+#    #+#             */
/*   Updated: 2021/08/08 18:21:37 by mwatkins         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int	*tab, int size)
{
	int	i;
	int	size2;
	int	tempo;

	size2 = size - 1;
	i = 0;
	while (i < (size / 2))
	{
		tempo = tab[i];
		tab[i] = tab[size2];
		tab[size2] = tempo;
		size2--;
		i++;
	}
}
