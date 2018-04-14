/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphuntso <dphuntso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 14:51:57 by dphuntso          #+#    #+#             */
/*   Updated: 2018/03/01 20:10:23 by dphuntso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	ch;
	char	*chr;

	chr = (char *)s;
	ch = (char)c;
	while (*chr)
	{
		if (*chr == ch)
			return (chr);
		chr++;
	}
	if (*chr == ch)
		return (chr);
	return (NULL);
}
