/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 14:24:53 by obelange          #+#    #+#             */
/*   Updated: 2016/09/01 23:48:12 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		main(void)
{
	int x;
	int y;
	int *a = &x;
	int *b = &y;
	char *str;
	char dst[10];
	char *abc;
	char *ebf;

	x = ft_strlen("asdf");
	y = ft_strcmp("aaa", "aaa");
	abc = "0123456789";
	ebf = "0123456789abcdef";

	if (x == 4 && y == 0)
	{
		ft_putstr("the length: ");
		ft_putnbr(x);
	}
	ft_putchar('\n');

	str = ft_convert_base("10", abc, ebf);

	ft_strcpy(dst, str);

	ft_putnbr(ft_atoi("420000"));
	ft_putchar('\n');
	
	ft_putnbr(ft_is_prime(ft_atoi("3")));
	ft_putnbr(ft_is_prime(ft_atoi("11")));
	ft_putnbr(ft_sqrt(ft_atoi("16")));
	ft_putnbr(ft_is_prime(ft_atoi("6")));
	ft_putchar('\n');

	ft_putstr(dst);	
	ft_putchar('\n');
	

	return (0);
}


