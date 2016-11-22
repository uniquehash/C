/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 16:47:38 by obelange          #+#    #+#             */
/*   Updated: 2016/08/12 16:47:41 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(int c);

int		ft_putnbr(int nb);

void	ft_ultimate_div_mod(int *a, int *b);

int		main(void)
{
	int a;
	int b; 
	int *div;
	int *mod;

	a = 4;
	b = 3;
	div = &a;
	mod = &b;

	ft_putchar('a');
	ft_putchar(' ');
	ft_putnbr(a);
	ft_putchar(' ');
	ft_putchar('b');
	ft_putchar(' ');
	ft_putnbr(b);

	ft_ultimate_div_mod(div, mod);

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
