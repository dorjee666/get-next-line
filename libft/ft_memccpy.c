/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphuntso <dphuntso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 15:19:05 by dphuntso          #+#    #+#             */
/*   Updated: 2018/03/01 18:35:23 by dphuntso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		ch;
	unsigned char		*char_dst;
	const unsigned char	*char_src;

	char_dst = (unsigned char *)dst;
	char_src = (const unsigned char *)src;
	ch = (unsigned char)c;
	while (n)
	{
		*char_dst = *char_src;
		if (*char_dst++ == ch)
			return (char_dst);
		char_src++;
		n--;
	}
	return (NULL);
}
