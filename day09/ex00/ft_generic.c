/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 18:47:48 by obelange          #+#    #+#             */
/*   Updated: 2016/08/18 19:03:40 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	loop(int i)
{
	if (i == 0)
		putchar('T');
	else if (i == 1 || i == 4 || i == 7 || i == 10)
		putchar('u');
	else if (i % 3 == 0)
		putchar('t');
	else if (i == 2 || i == 5 || i == 8)
		putchar(' ');
}

void	ft_generic(void)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (j < 2)
	{
		while (i < 11)
		{
			loop(i);
			i++;
		}
		i = 0;
		if (j == 0)
		{
			putchar(' ');
			putchar(';');
			putchar(' ');
		}
		j++;
	}
	putchar('\n');
}
