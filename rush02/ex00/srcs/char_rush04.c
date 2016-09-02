/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_rush04.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/28 23:12:59 by zhu               #+#    #+#             */
/*   Updated: 2016/08/28 23:13:13 by zhu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <header.h>

char	ft_rush_condition4(int x, int y, int x_i, int y_i)
{
	if (x_i == 0 && y_i == 0)
		return ('A');
	else if (x_i == 0 && y_i == y - 1)
		return ('C');
	else if (x_i > 0 && x_i < x - 1 && y_i < y - 1 && y_i > 0)
		return (' ');
	else if (x_i == x - 1 && y_i == 0)
		return ('C');
	else if (x_i == x - 1 && y_i == y - 1)
		return ('A');
	else
		return ('B');
}

char	*char_rush04(int x, int y, int x_i, int y_i)
{
	char	*output;
	int		j;

	j = 0;
	if (x > 0 && y > 0)
	{
		output = (char*)malloc(sizeof(char) * (x * y + y));
		while (y_i < y)
		{
			while (x_i < x)
			{
				output[j] = ft_rush_condition4(x, y, x_i, y_i);
				x_i++;
				j++;
			}
			if (!(x <= 0 || y <= 0))
				output[j] = '\n';
			x_i = 0;
			y_i++;
			j++;
		}
		output[x * y + y] = '\0';
		return (output);
	}
	return (0);
}
