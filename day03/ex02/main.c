/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 16:49:36 by obelange          #+#    #+#             */
/*   Updated: 2016/08/12 16:49:38 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(int c);

int		ft_putnbr(int nb);

void	ft_swap(int *a, int *b);

int		main(void)
{
	int nb;
	int bn; 
	int *a;
	int *b;

	a = &nb;
	b = &bn;
	nb = 4;
	bn = 5;
	ft_putchar('a');
	ft_putchar(' ');
	ft_putnbr(*a);
	ft_putchar(' ');
	ft_putchar('b');
	ft_putchar(' ');
	ft_putnbr(*b);
	ft_swap(a, b);
	ft_putchar(' ');
	ft_putchar('-');
	ft_putchar('>');
	ft_putchar(' ');
	ft_putchar('a');
	ft_putchar(' ');
	ft_putnbr(*a);
	ft_putchar(' ');
	ft_putchar('b');
	ft_putchar(' ');
	ft_putnbr(*b);
	return (0);
}
