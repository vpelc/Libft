/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 12:55:17 by vpelc             #+#    #+#             */
/*   Updated: 2024/04/16 18:24:50 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*ft_strj(char const *s1, char const *s2, char *join, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < (len - ft_strlen(s2)))
	{
		join[j] = s1[i];
		j++;
		i++;
	}
	i = 0;
	while (j < len)
	{
		join[j] = s2[i];
		j++;
		i++;
	}
	join[j] = '\0';
	return (join);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	len;

	len = ft_strlen(s1) + ft_strlen(s2);
	join = malloc(sizeof(char) * (len + 1));
	if (join == 0)
		return (0);
	ft_strj(s1, s2, join, len);
	return (join);
}
