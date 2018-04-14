/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphuntso <dphuntso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 12:32:08 by dphuntso          #+#    #+#             */
/*   Updated: 2018/02/24 13:22:46 by dphuntso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*copy_dst;
	unsigned char	*copy_src;

	i = 0;
	copy_dst = (unsigned char *)dst;
	copy_src = (unsigned char *)src;
	while (i < n)
	{
		copy_dst[i] = copy_src[i];
		i++;
	}
	return (dst);
}
