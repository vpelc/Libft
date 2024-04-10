/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 18:01:01 by vpelc             #+#    #+#             */
/*   Updated: 2024/04/09 20:51:28 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	make_pos(int n)
{
	unsigned int	nbr;

	if (n != -2147483648)
		n = -n;
	nbr = n;
	return (nbr);
}


size_t	ft_strnbr(int n)
{
	size_t	i;

	i = 0;
	if (n >= 10)
	{
		ft_strnbr(n / 10);
		i++;
	}
	i++;
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	i;
	unsigned int	nbr;

	nbr = n;
	str = malloc(sizeof(char) * (ft_strnbr(make_pos(n))));
	i = 0;
	if (n < 0)
	{
		str[0] = '-';
		nbr = make_pos(n);
	}
	if (n >= 10)
	{
		ft_itoa(n / 10);
		str[i] = (n % 10 + 48);
		i++;
	}
	if (n < 10 && n)
	{
		str[i] = (n % 10 + 48);
		i++;
	}
	return (str);
}
