/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 22:06:51 by obelange          #+#    #+#             */
/*   Updated: 2016/08/18 22:55:29 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int size;
	int i;

	i = 0;
	size = 0;
	range[0] = 0;
	if (min >= max)
		size = 0;
	else if (max >= 0)
		size = (max - min);
	else if (max < 0)
		size = (abs(min) - abs(max));
	if (size > 0)
	{
		range[0] = (int*)malloc(sizeof(int) + size);
		while (min < max)
		{
			range[0][i] = min;
			min++;
			i++;
		}
	}
	return (size);
}
