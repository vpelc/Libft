/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 16:47:29 by vpelc             #+#    #+#             */
/*   Updated: 2024/04/23 13:53:57 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	c1;

	if (n == 0)
		return (0);
	i = 0;
	c1 = c;
	str = (unsigned char *)s;
	while (i < (n - 1) && str[i] != c1)
		i++;
	if (str[i] != c1)
		return (0);
	return (str + i);
}
