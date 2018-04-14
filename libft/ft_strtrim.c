/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphuntso <dphuntso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 14:40:47 by dphuntso          #+#    #+#             */
/*   Updated: 2018/03/08 01:28:24 by dphuntso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		is_space(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

static	size_t	spacefront(char const *s)
{
	size_t i;

	i = 0;
	while (s[i] && is_space(s[i]))
		i++;
	return (i);
}

static	size_t	spaceback(char const *s)
{
	int	len;

	len = (int)ft_strlen(s);
	while (is_space(s[len - 1]) && len)
		len--;
	return (ft_strlen(s) - (size_t)len);
}

static	int		emptystr(char const *s)
{
	size_t len;
	size_t space;

	space = 0;
	len = ft_strlen(s);
	while (*s && is_space(*s))
	{
		space++;
		s++;
	}
	if (space == len)
		return (1);
	return (0);
}

char			*ft_strtrim(char const *s)
{
	char	*str;
	size_t	front;
	size_t	len;
	size_t	i;

	if (s == NULL)
		return (NULL);
	str = (char *)s;
	front = spacefront(s);
	len = ft_strlen(s) - front - spaceback(s);
	if (emptystr(s))
		len = 0;
	if ((str = (char *)malloc(len * sizeof(char) + 1)) == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[front];
		i++;
		front++;
	}
	str[i] = '\0';
	return (str);
}
