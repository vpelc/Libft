/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 17:14:32 by vpelc             #+#    #+#             */
/*   Updated: 2024/04/11 11:46:36 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(const char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\v' || str[i] == '\t'
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	return (i);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	r;	
	int	n;

	n = 1;
	r = 0;
	i = ft_isspace(str);
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			n = -n;
		i++;
		r++;
	}
	if (r > 1)
		return (0);
	r = 0;
	while (str[i] >= 48 && str[i] <= 57)
	{
		r = r * 10;
		r = r + (str[i] - 48);
		i++;
	}
	return (r * n);
}
