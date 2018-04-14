/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphuntso <dphuntso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 17:06:39 by dphuntso          #+#    #+#             */
/*   Updated: 2018/03/04 14:17:03 by dphuntso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	check(char *char1, char *char2, size_t len)
{
	char *str1;
	char *str2;

	str1 = char1;
	str2 = char2;
	while (*str2)
	{
		if (len == 0)
			return (0);
		if (*str1 == '\0' && *str2)
			return (0);
		if (*str1 != *str2)
			return (0);
		len--;
		str1++;
		str2++;
	}
	return (1);
}

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*hay;
	char	*ned;

	hay = (char *)haystack;
	ned = (char *)needle;
	if (*needle == '\0')
		return ((char *)haystack);
	while (len && *hay)
	{
		if (*hay == *ned)
		{
			if (check(hay, ned, len) == 1)
				return ((char *)hay);
		}
		hay++;
		len--;
	}
	return (NULL);
}
