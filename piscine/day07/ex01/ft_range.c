/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 13:50:51 by obelange          #+#    #+#             */
/*   Updated: 2016/08/18 21:46:03 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		abs(int x);

int		*ft_range(int min, int max)
{
	int *ptr;
	int i;
	int size;

	i = 0;
	size = 0;
	ptr = 0;
	if (min >= max)
		size = 0;
	else if (max >= 0)
		size = (max - min);
	else if (max < 0)
		size = (abs(min) - abs(max));
	if (size > 0)
	{
		ptr = (int*)malloc(sizeof(int) + size);
		while (min < max)
		{
			ptr[i] = min;
			i++;
			min++;
		}
	}
	return (ptr);
}

int		abs(int x)
{
	if (x < 0)
		x *= (-1);
	return (x);
}
