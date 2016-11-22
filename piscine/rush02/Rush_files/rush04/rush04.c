/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 21:39:14 by cramirez          #+#    #+#             */
/*   Updated: 2016/08/28 13:35:49 by slogos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c);

int	rush(int x, int y)
{
	int y_ind;
	int x_ind;

	y_ind = 0;
	x_ind = 0;
	while (y_ind < y)
	{
		while (x_ind < x)
		{
			if (x_ind == 0 && y_ind == 0)
				ft_putchar('A');
			else if (x_ind == 0 && y_ind == y - 1)
				ft_putchar('C');
			else if (x_ind > 0 && x_ind < x - 1 && y_ind < y - 1 && y_ind > 0)
				ft_putchar(' ');
			else if (x_ind == x - 1 && y_ind == 0)
				ft_putchar('C');
			else if (x_ind == x -1 && y_ind == y -1)
				ft_putchar('A');
			else
				ft_putchar('B');
			x_ind++;
		}
		if (!(x <= 0 || y <= 0))
			ft_putchar('\n');
		x_ind = 0;
		y_ind++;
	}
	return (0);
}
