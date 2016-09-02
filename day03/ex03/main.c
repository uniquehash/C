/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 16:49:04 by obelange          #+#    #+#             */
/*   Updated: 2016/08/12 16:49:07 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(int c);

int		ft_putnbr(int nb);

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int a;
	int b; 
	int *div;
	int *mod;
	int c;
	int d;

	a = 4;
	b = 3;
	div = &c;
	mod = &d;

	ft_putchar('a');
	ft_putchar(' ');
	ft_putnbr(a);
	ft_putchar(' ');
	ft_putchar('b');
	ft_putchar(' ');
	ft_putnbr(b);

	ft_div_mod(a, b, div, mod);

	ft_putchar(' ');
	ft_putchar('-');
	ft_putchar('>');
	ft_putchar(' ');

	ft_putchar('a');
	ft_putchar(' ');
	ft_putnbr(*div);
	ft_putchar(' ');
	ft_putchar('b');
	ft_putchar(' ');
	ft_putnbr(*mod);
	return (0);
}
