/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphuntso <dphuntso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 14:51:47 by dphuntso          #+#    #+#             */
/*   Updated: 2018/03/08 01:39:46 by dphuntso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	strnum(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			i++;
			while (*s && (*s != c))
				s++;
		}
	}
	return (i);
}

static	size_t	ft_len(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*s != c)
	{
		i++;
		s++;
	}
	return (i);
}

static	char	*ft_sstrcpy(char *dst, const char *src, size_t len)
{
	int i;

	i = 0;
	while (src[i] && len)
	{
		len--;
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

static	char	**extra(char const *s, char c)
{
	char	**array;
	size_t	len;

	len = strnum(s, c);
	if ((array = (char **)malloc(len * sizeof(char *) + 1)) == NULL)
		return (NULL);
	len = 0;
	while (*s)
	{
		if (*s && *s != c)
		{
			array[len] = (char *)malloc((ft_len(s, c)) * sizeof(char) + 1);
			if (array[len] == NULL)
				return (NULL);
			ft_sstrcpy(array[len], s, ft_len(s, c));
			len++;
		}
		while (*s != c && *s)
			s++;
		while (*s == c)
			s++;
	}
	array[len] = NULL;
	return (array);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**array;

	if (s == NULL)
		return (NULL);
	array = extra(s, c);
	return (array);
}
