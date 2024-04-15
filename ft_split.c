/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 15:13:54 by vpelc             #+#    #+#             */
/*   Updated: 2024/04/15 19:05:44 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nbrstr(char const *str, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if ((str[i + 1] == c || str[i + 1] == '\0') && str[i] != c)
			j++;
		i++;
	}
	return (j);
}

void	ft_putstr(char *split, char const *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i] != c && str[i])
	{
		split[i] = str[i];
		i++;
	}
	split[i] = '\0';
}

void	ft_put_in_split(char **split, char const *str, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	k = 0;
	while (str[i])
	{
		if (str[i] == c)
			i++;
		else
		{
			j = 0;
			while (str[i + j] != c && str[i + j])
				j++;
			split[k] = malloc(sizeof(char) * j + 1);
			ft_putstr(split[k], str + i, c);
			i += j;
			k++;
		}
	}
}

char	**ft_split(char const *str, char c)
{
	char	**split;
	size_t	size;

	size = ft_nbrstr(str, c);
	split = malloc((size + 1) * sizeof(char *));
	ft_put_in_split(split, str, c);
	split[size] = 0;
	return (split);
}
