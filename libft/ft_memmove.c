/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphuntso <dphuntso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 12:50:44 by dphuntso          #+#    #+#             */
/*   Updated: 2018/03/01 19:16:19 by dphuntso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	moveright(unsigned char *dst, const unsigned char *src, size_t n)
{
	while (n)
	{
		n--;
		dst[n] = src[n];
	}
}

static void	moveleft(unsigned char *dst, const unsigned char *src, size_t n)
{
	while (n)
	{
		*dst = *src;
		dst++;
		src++;
		n--;
	}
}

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dst_ch;
	const unsigned char	*src_ch;

	dst_ch = (unsigned char *)dst;
	src_ch = (const unsigned char *)src;
	if (dst_ch > src_ch)
		moveright(dst_ch, src_ch, len);
	else
		moveleft(dst_ch, src_ch, len);
	return (dst);
}
