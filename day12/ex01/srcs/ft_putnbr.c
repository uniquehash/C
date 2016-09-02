/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 11:21:52 by obelange          #+#    #+#             */
/*   Updated: 2016/08/25 21:01:57 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_file.h"

int		ut_abs(int x)
{
	if (x < 0)
		return (x * -1);
	return (x);
}

void	ft_putnbr(int nb)
{
	int i;

	if (nb == -2147483648)
		i = 1000000000;
	else
		i = 1;
	while (ut_abs((nb / i)) >= 10)
		i *= 10;
	if (nb < 0)
		ft_putchar('-');
	while (i > 0)
	{
		ft_putchar(ut_abs(((nb / i) % 10)) + '0');
		i /= 10;
	}
}
