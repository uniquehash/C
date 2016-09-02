/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 18:37:03 by obelange          #+#    #+#             */
/*   Updated: 2016/08/13 18:54:22 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_fibonacci(int index);

int		main(void)
{
	int i;
	int x;

	i = -2;
	while (i < 10)
	{
		x = ft_fibonacci(i);
		printf("the fibo number for %d is: %d\n", i, x);
		i++;
	}
	return (0);
}
