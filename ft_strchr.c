/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 16:21:24 by vpelc             #+#    #+#             */
/*   Updated: 2024/04/08 12:52:35 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	size_t	n;
	char	*str;

	i = 0;
	str = (char *)s;
	n = ft_strlen(str);
	while (i <= n && str[i] != c)
		i++;
	if (i > n)
		return (0);
	return (str + i);
}
