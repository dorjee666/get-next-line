/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphuntso <dphuntso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 10:39:30 by dphuntso          #+#    #+#             */
/*   Updated: 2018/02/24 15:08:07 by dphuntso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ch;

	ch = (unsigned char *)s;
	while (n)
	{
		if (*ch == (unsigned char)c)
			return (ch);
		n--;
		ch++;
	}
	return (NULL);
}
