/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 19:11:54 by obelange          #+#    #+#             */
/*   Updated: 2016/08/13 21:36:57 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_sqrt(int nb);

int		main(void)
{
	int nb;
	int x;

	nb = -1;
	while (nb < 26)
	{
		x = ft_sqrt(nb);
		printf("the sqrt of %d is: %d\n", nb, x);
		nb++;
	}
	return (0);
}
