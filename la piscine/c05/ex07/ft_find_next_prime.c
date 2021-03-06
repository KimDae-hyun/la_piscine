/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 03:56:37 by daekim            #+#    #+#             */
/*   Updated: 2020/10/31 16:41:59 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_next_prime(int nb)
{
	int i;

	if (nb < 2)
		return (2);
	else if (nb == 3)
		return (3);
	i = 3;
	while (i < nb)
	{
		if (nb % i == 0)
		{
			nb++;
			i = 1;
		}
		if (i >= nb)
		{
			i = 1;
			nb++;
		}
		i = i + 2;
	}
	return (nb);
}
