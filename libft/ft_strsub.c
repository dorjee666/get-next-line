/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphuntso <dphuntso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 12:03:02 by dphuntso          #+#    #+#             */
/*   Updated: 2018/03/08 01:23:23 by dphuntso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *str;

	if (s == NULL)
		return (NULL);
	if ((str = (char *)malloc(len * sizeof(char) + 1)) == NULL)
		return (NULL);
	str = ft_strncpy(str, &s[start], len);
	str[len] = '\0';
	return (str);
}
