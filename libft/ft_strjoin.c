/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphuntso <dphuntso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 14:33:06 by dphuntso          #+#    #+#             */
/*   Updated: 2018/03/08 01:19:06 by dphuntso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	if ((str = (char *)malloc(len * sizeof(char) + 1)) == NULL)
		return (NULL);
	len = 0;
	while (*s1)
	{
		str[len] = *s1;
		len++;
		s1++;
	}
	while (*s2)
	{
		str[len] = *s2;
		s2++;
		len++;
	}
	str[len] = '\0';
	return (str);
}
