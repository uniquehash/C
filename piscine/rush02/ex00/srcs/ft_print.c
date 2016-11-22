/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/27 21:11:43 by zhu               #+#    #+#             */
/*   Updated: 2016/08/28 23:13:35 by zhu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <header.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_show(int nb, int col, int row, int flag)
{
	if (flag == 1)
		ft_putstr(" || ");
	ft_putstr("[rush-0");
	ft_putchar(nb + '0');
	ft_putstr("] [");
	ft_putchar(col + '0');
	ft_putstr("] [");
	ft_putchar(row + '0');
	ft_putstr("]");
}

int		ft_add_tab(int *tab)
{
	int i;

	i = 0;
	while (i < 5)
	{
		if (tab[i] == 1)
			return (1);
		i++;
	}
	return (0);
}
