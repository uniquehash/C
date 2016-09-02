/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 11:21:52 by obelange          #+#    #+#             */
/*   Updated: 2016/08/17 23:59:45 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
int		abs(int x);

void	ft_putnbr(int nb)
{
	int i;

	if (nb == -2147483648)
		i = 1000000000;
	else
		i = 1;
	while (abs((nb / i)) >= 10)
		i *= 10;
	if (nb < 0)
		putchar('-');
	while (i > 0)
	{
		putchar(abs(((nb / i) % 10)) + '0');
		i /= 10;
	}
}

int		abs(int x)
{
	if (x < 0)
		return (x * -1);
	return (x);
}
