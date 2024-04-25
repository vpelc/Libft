/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 13:39:35 by vpelc             #+#    #+#             */
/*   Updated: 2024/04/23 13:36:03 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t len)
{
	unsigned char	*s;
	size_t			i;

	i = 0;
	s = str;
	while (i < len)
	{
		s[i] = 0;
		i++;
	}
}
