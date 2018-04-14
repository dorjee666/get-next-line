/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphuntso <dphuntso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 15:08:08 by dphuntso          #+#    #+#             */
/*   Updated: 2018/03/07 23:50:28 by dphuntso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	ret;
	size_t	length;

	length = ft_strlen(src);
	len = ft_strlen(dst);
	if (len > dstsize)
		ret = dstsize;
	else
		ret = len;
	if (dstsize && len < dstsize)
	{
		while ((dstsize - len - 1) && *src)
		{
			dst[len] = *src;
			src++;
			len++;
		}
		dst[len] = '\0';
	}
	return (ret + length);
}
