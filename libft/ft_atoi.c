/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphuntso <dphuntso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 21:34:31 by dphuntso          #+#    #+#             */
/*   Updated: 2018/03/07 16:36:54 by dphuntso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	white_spaces(char ch)
{
	if (ch == '\t' || ch == '\f' || ch == '\r')
		return (1);
	else if (ch == ' ' || ch == '\v' || ch == '\n')
		return (1);
	else
		return (0);
}

int			ft_atoi(const char *str)
{
	int			i;
	int			sign;
	int			result;

	sign = 1;
	result = 0;
	i = 0;
	while (white_spaces(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = (-1);
		if (str[i + 1] == '-' || str[i + 1] == '+')
			return (0);
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		result = result * 10;
		result += (str[i] - '0');
		i++;
	}
	return (result * sign);
}
