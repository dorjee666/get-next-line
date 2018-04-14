/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphuntso <dphuntso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 17:31:40 by dphuntso          #+#    #+#             */
/*   Updated: 2018/03/03 21:13:30 by dphuntso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ftlen(int sign)
{
	if (sign == 1)
		return (0);
	return (1);
}

static	char	*numtostr(long long n, int len, int sign)
{
	char		*str;
	long long	rem;

	if ((str = (char *)malloc(len * sizeof(char) + 1)) == NULL)
		return (NULL);
	if (n > 0)
	{
		str[len--] = '\0';
		while (n > 0)
		{
			rem = n % 10;
			n = n / 10;
			str[len--] = (char)((int)rem + 48);
		}
		if (sign == (-1))
			str[0] = '-';
	}
	else
	{
		str[0] = '0';
		str[1] = '\0';
	}
	return (str);
}

char			*ft_itoa(int n)
{
	char		*str;
	int			sign;
	long long	ncopy;
	int			len;

	sign = (-1);
	if (n >= 0)
		sign = 1;
	len = ftlen(sign);
	ncopy = (long long)n * (long long)sign;
	while (ncopy >= 10)
	{
		ncopy = ncopy / 10;
		len++;
	}
	str = numtostr((long long)n * (long long)sign, len + 1, sign);
	return (str);
}
