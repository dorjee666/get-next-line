/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphuntso <dphuntso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 15:05:48 by dphuntso          #+#    #+#             */
/*   Updated: 2018/03/01 21:36:49 by dphuntso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ch;
	char	chr;
	size_t	len;

	chr = (char)c;
	ch = (char *)s;
	len = ft_strlen(ch);
	while (*ch)
		ch++;
	len++;
	while (len)
	{
		if (*ch == chr)
			return (ch);
		ch--;
		len--;
	}
	return (NULL);
}
