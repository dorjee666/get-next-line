/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphuntso <dphuntso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 14:45:44 by dphuntso          #+#    #+#             */
/*   Updated: 2018/03/07 23:29:50 by dphuntso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*str;
	size_t	dstlen;

	dstlen = ft_strlen(s1);
	str = s1;
	while (*str)
		str++;
	while (n && *s2)
	{
		*str = *s2;
		s2++;
		str++;
		n--;
	}
	*str = '\0';
	return (s1);
}
