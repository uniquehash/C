/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 16:25:20 by obelange          #+#    #+#             */
/*   Updated: 2016/08/13 16:49:15 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_power(int nb, int power);

int		main(void)
{
	int	x;
	int i;
	int y;

	y = 0;
	i = 6;
	x = ft_iterative_power(y, i);
	printf("the result of %d to the power of %d is: %d", y, i, x);
	return (0);
}
