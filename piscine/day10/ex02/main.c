/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 22:33:36 by obelange          #+#    #+#             */
/*   Updated: 2016/08/23 12:30:27 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		add_one(int x)
{
	x += 1;
	return (x);
}

int		*ft_map(int *tab, int length, int (*f)(int));

int		main(void)
{
	int x[4] = {2,3,2,4};
	int *y;
	int i;

	y = ft_map(x, 4, &add_one);
	i = 0;
	while (i < 4)
	{
		printf("y[%d]: %d\n", i, y[i]);
		i++;
	}

	return (0);
}
