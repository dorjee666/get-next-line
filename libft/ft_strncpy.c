/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphuntso <dphuntso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 14:34:19 by dphuntso          #+#    #+#             */
/*   Updated: 2018/02/27 14:09:38 by dphuntso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char	*str;
	int		i;

	i = 0;
	str = dst;
	while (src[i] && len)
	{
		*str = src[i];
		i++;
		str++;
		len--;
	}
	while (len)
	{
		*str = '\0';
		str++;
		len--;
	}
	return (dst);
}
