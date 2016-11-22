/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 18:57:37 by obelange          #+#    #+#             */
/*   Updated: 2016/08/23 23:15:23 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doop.h"

char	ut_find_operator(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '+')
			return ('+');
		else if (str[i] == '-')
			return ('-');
		else if (str[i] == '/')
			return ('/');
		else if (str[i] == '*')
			return ('*');
		else if (str[i] == '%')
			return ('%');
		else
			return (0);
		i++;
	}
	return (0);
}

int		ut_operate(int x, char op, int y)
{
	if (op == '/')
	{
		if (y == 0)
			ft_putstr("Stop : division by zero");
		else
			ft_putnbr(x / y);
	}
	else if (op == '%')
	{
		if (y == 0)
			ft_putstr("Stop : modulo by zero");
		else
			ft_putnbr(x % y);
	}
	else if (op == '+')
		ft_putnbr(x + y);
	else if (op == '-')
		ft_putnbr(x - y);
	else if (op == '*')
		ft_putnbr(x * y);
	return (0);
}

int		main(int argc, char **argv)
{
	int		x;
	char	op;
	int		a;
	int		b;

	x = 0;
	if (argc == 4)
	{
		a = ft_atoi(argv[1]);
		b = ft_atoi(argv[3]);
		op = ut_find_operator(argv[2]);
		if (op == 0)
		{
			ft_putstr("0\n");
			return (0);
		}
		ut_operate(a, op, b);
		ft_putchar('\n');
	}
	else
		return (0);
	return (0);
}
