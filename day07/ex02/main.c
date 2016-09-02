/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 22:07:03 by obelange          #+#    #+#             */
/*   Updated: 2016/08/18 22:56:16 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_ultimate_range(int **range, int min, int max);

int		main(void)
{
	int min;
	int max;
	int size;
	int i;
	int **range;
	int *x;

	i = 0;
	min = -5;
	max = -5;
	range = &x;
	size = ft_ultimate_range(range, min, max);
	printf("the size is %d\n", size);
	while (i < size) 
	{
		printf("array[%d] is:  %d\n", i, range[0][i]);
		i++;
	}

	return (0);
}
