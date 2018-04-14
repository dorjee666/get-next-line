/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphuntso <dphuntso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 15:15:26 by dphuntso          #+#    #+#             */
/*   Updated: 2018/03/04 13:58:41 by dphuntso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	check(unsigned char *str1, unsigned char *str2)
{
	while (*str2)
	{
		if ((*str1 == '\0') || (*str1 != *str2))
			return (0);
		str1++;
		str2++;
	}
	return (1);
}

char		*ft_strstr(const char *haystack, const char *needle)
{
	unsigned char	*hay;
	unsigned char	*ned;

	hay = (unsigned char *)haystack;
	ned = (unsigned char *)needle;
	if (*needle == '\0')
		return ((char *)haystack);
	while (*hay)
	{
		if (*hay == *ned)
		{
			if (check(hay, ned) == 1)
				return ((char *)hay);
		}
		hay++;
	}
	return (NULL);
}
