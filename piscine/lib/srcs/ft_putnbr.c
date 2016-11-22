/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 22:34:32 by obelange          #+#    #+#             */
/*   Updated: 2016/09/01 22:43:46 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft.h"

//void	ft_putchar(char c)
//{
//	write(1, &c, 1);
//}

int		ft_abs(int x)
{
	if (x < 0)
		return (x * -1);
	return (x);
}

void	ft_putnbr(int x)
{
	int i;

	if (x == -2147483648)
		i = 1000000000;
	else
		i = 1;
	while (ft_abs((x / i)) >= 10)
		i *= 10;
	if (x < 0)
		ft_putchar('-');
	while (i > 0)
	{
		ft_putchar(ft_abs(((x / i) % 10)) + '0');
		i /= 10;
	}
}
