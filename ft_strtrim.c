/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 17:48:57 by vpelc             #+#    #+#             */
/*   Updated: 2024/04/16 18:25:13 by vpelc            ###   ########.fr       */
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

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*cpy;
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	cpy = malloc(sizeof(char) * (len + 1));
	if (cpy == 0)
		return (0);
	ft_strlcpy(cpy, s1, len + 1);
	i = len - 1;
	while (ft_check_set(s1[i], set) == 1)
	{
		cpy[i] = '\0';
		i--;
	}
	i = 0;
	while (ft_check_set(s1[i], set) == 1)
		i++;
	ft_memmove(cpy, cpy + i, (len + 1 - i));
	return (cpy);
}
