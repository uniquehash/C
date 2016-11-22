/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 13:51:04 by obelange          #+#    #+#             */
/*   Updated: 2016/08/18 21:53:53 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		*ft_range(int min, int max);

int		main(void)
{
	int min;
	int max;
	int size;
	int *ptr;
	int i;

	i = 0;
	min = -2147483648;
	max = -2147483647;
	ptr = ft_range(min, max);

	size = 0;	
	if (min >= max)
		size = 0;
	else if (max >= 0)
		size = (max - min);
	else if (max < 0)
		size = ((min * -1) - (max * -1));

	printf("the size is %d\n", size);
	while (i < size)
	{
		printf("array[%d] is :  %d\n", i, ptr[i]);
		i++;
	}
	return (0);
}


