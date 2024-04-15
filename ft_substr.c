/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 12:31:28 by vpelc             #+#    #+#             */
/*   Updated: 2024/04/15 15:00:36 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dup;
	size_t	i;

	dup = malloc(sizeof(char) * (len + 1));
	if (dup == 0)
		return (0);
	if (start > ft_strlen(s))
	{
		ft_bzero(dup, len);
		return (dup);
	}
	i = 0;
	while (i < len)
	{
		dup[i] = s[start + i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
