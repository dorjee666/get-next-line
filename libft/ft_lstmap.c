/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphuntso <dphuntso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 10:33:20 by dphuntso          #+#    #+#             */
/*   Updated: 2018/03/07 17:58:28 by dphuntso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst_, t_list *(*f)(t_list *elem))
{
	t_list *cpy;
	t_list *lst;

	if (!lst_)
		return (NULL);
	lst = f(lst_);
	cpy = lst;
	while (lst_->next)
	{
		lst_ = lst_->next;
		if (!(lst->next = f(lst_)))
		{
			free(lst->next);
			return (NULL);
		}
		lst = lst->next;
	}
	return (cpy);
}
