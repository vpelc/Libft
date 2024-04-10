/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 16:40:48 by vpelc             #+#    #+#             */
/*   Updated: 2024/04/08 12:52:30 by vpelc            ###   ########.fr       */
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
	while (n >= i && str[n] != c)
		n--;
	if (n < i)
		return (0);
	return (str + n);
}
