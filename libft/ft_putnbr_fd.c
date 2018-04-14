/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphuntso <dphuntso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 21:00:22 by dphuntso          #+#    #+#             */
/*   Updated: 2018/03/03 21:47:44 by dphuntso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	printnum(long long n, int fd)
{
	long long rem;

	rem = n % 10;
	n = n / 10;
	if (n > 0)
		printnum(n, fd);
	ft_putchar_fd(rem + 48, fd);
}

void			ft_putnbr_fd(int n, int fd)
{
	int sign;

	sign = 1;
	if ((long long)n < 0)
		sign = (-1);
	if (sign < 0)
		ft_putchar_fd('-', fd);
	if (n == 0)
		ft_putchar_fd('0', fd);
	else
		printnum((long long)n * (long long)sign, fd);
}
