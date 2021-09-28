/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwatkins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 20:21:26 by mwatkins          #+#    #+#             */
/*   Updated: 2021/08/24 17:10:57 by mwatkins         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char	*dest, char	*src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_len(char	**strs, char	*sep, int	size)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = 0;
	k = 0;
	while (size > i)
	{
		j = 0;
		while (strs[i][j])
		{
			j++;
			k++;
		}
		l = 0;
		while (sep[l])
		{
			l++;
			k++;
		}
		i++;
	}
	return (k);
}

char	*ft_strjoin(int	size, char	**strs, char	*sep)
{
	int		i;
	char	*str;

	i = 0;
	str = malloc(sizeof(char) * (ft_len(strs, sep, size) + 1));
	if (!str)
		return (NULL);
	while (i < ft_len(strs, sep, size) + 1)
		str[i++] = 0;
	i = 0;
	if (size == 0)
		return (str);
	while (size > i)
	{
		ft_strcat(str, strs[i]);
		if (size - 1 > i)
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}
