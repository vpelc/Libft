/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 11:38:32 by vpelc             #+#    #+#             */
/*   Updated: 2024/04/23 12:40:38 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*calloc;

	if (nmemb && size && nmemb > (4294967295 / size))
		return (0);
	calloc = malloc(size * nmemb);
	if (!calloc)
		return (0);
	ft_bzero(calloc, (nmemb * size));
	return (calloc);
}
