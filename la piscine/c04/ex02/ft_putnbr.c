/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 00:43:41 by daekim            #+#    #+#             */
/*   Updated: 2020/10/31 15:43:26 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rec(long a)
{
	a = a / 10;
	if (a >= 10)
		ft_rec(a);
	a = a % 10 + '0';
	write(1, &a, 1);
}

void	ft_putnbr(int nb)
{
	long n;

	n = nb;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= 10)
	{
		ft_rec(n);
	}
	n = n % 10 + '0';
	write(1, &n, 1);
}
