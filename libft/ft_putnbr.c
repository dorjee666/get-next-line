/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphuntso <dphuntso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 19:34:42 by dphuntso          #+#    #+#             */
/*   Updated: 2018/03/03 21:40:17 by dphuntso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	printnum(long long n)
{
	long long rem;

	rem = n % 10;
	n = n / 10;
	if (n > 0)
		printnum(n);
	ft_putchar(rem + 48);
}

void			ft_putnbr(int n)
{
	int sign;

	sign = 1;
	if ((long long)n < 0)
		sign = (-1);
	if (sign < 0)
		ft_putchar('-');
	if (n == 0)
		ft_putchar('0');
	else
		printnum((long long)n * (long long)sign);
}
