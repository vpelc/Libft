/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelc <vpelc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:36:00 by vpelc             #+#    #+#             */
/*   Updated: 2024/04/19 15:45:32 by vpelc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*dup;
	t_list	*elem;
	void	*set;

	dup = 0;
	while (lst)
	{
		set = f(lst->content);
		elem = ft_lstnew(set);
		if (!elem)
		{
			del(set);
			ft_lstclear(&dup, (*del));
			return (dup);
		}
		ft_lstadd_back(&dup, elem);
		lst = lst->next;
	}
	return (dup);
}
