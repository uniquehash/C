/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 11:22:04 by obelange          #+#    #+#             */
/*   Updated: 2016/08/15 13:44:39 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putnbr(int nb);

int		main(void)
{
	int i;
	int min;
	int max;

	min = -2147483648;
	i = -10;
	max = 2147483647;
	printf("\n");
	ft_putnbr(min);
	while (i < 11)
	{
		printf("\n");
		ft_putnbr(i);
		i++;
	}
	printf("\n");
	ft_putnbr(max);
	printf("\n");
	printf("\n");
	return (0);
}
