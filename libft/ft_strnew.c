/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphuntso <dphuntso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 22:06:41 by dphuntso          #+#    #+#             */
/*   Updated: 2018/03/02 14:53:03 by dphuntso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;

	if ((str = (char *)malloc(size * sizeof(*str) + 1)) == NULL)
		return (NULL);
	while (size)
	{
		str[size] = '\0';
		size--;
	}
	str[size] = '\0';
	return (str);
}
