/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphuntso <dphuntso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 19:07:34 by dphuntso          #+#    #+#             */
/*   Updated: 2018/03/07 17:04:11 by dphuntso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *head;

	head = *alst;
	while (head)
	{
		*alst = head;
		head = (*alst)->next;
		(*alst)->next = NULL;
		del((*alst)->content, (*alst)->content_size);
		free(*alst);
	}
	*alst = NULL;
}
