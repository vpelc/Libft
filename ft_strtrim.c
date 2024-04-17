/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 17:48:57 by vpelc             #+#    #+#             */
/*   Updated: 2024/04/17 18:07:48 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_check_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static	int	ft_onlyset(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(s1) - 1;
	j = 0;
	while (ft_check_set(s1[i], set) && i > 0)
		i--;
	if (i == 0)
		return (1);
	return (0);
}

static	int	ft_setlen_end(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(s1) - 1;
	j = 0;
	while (ft_check_set(s1[i], set) && s1[i])
	{
		i--;
		j++;
	}
	return (j);
}

static	int	ft_setlen_start(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (ft_check_set(s1[i], set) && s1[i])
		i++;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*cpy;
	size_t	len;
	size_t	i;
	size_t	j;

	if (ft_onlyset(s1, set))
	{
		cpy = calloc(1, 1);
		return (cpy);
	}
	len = ft_strlen(s1) - ft_setlen_end(s1, set) - ft_setlen_start(s1, set);
	cpy = malloc(sizeof(char) * (len + 1));
	if (cpy == 0)
		return (0);
	i = ft_setlen_start(s1, set);
	j = 0;
	while ((ft_strlen(s1) - ft_setlen_end(s1, set)) > i)
	{
		cpy[j] = s1[i];
		j++;
		i++;
	}
	cpy[j] = '\0';
	return (cpy);
}
