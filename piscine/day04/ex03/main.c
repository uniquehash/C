/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 16:54:37 by obelange          #+#    #+#             */
/*   Updated: 2016/08/13 17:06:39 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_power(int nb, int power);

int		main(void)
{
	int i;
	int x;
	int y;

	y = 0;
	i = 3;
	x = ft_recursive_power(y, i);
	
	printf("the result of %d to the power of %d is: %d", y, i, x);
	return (0);
}
