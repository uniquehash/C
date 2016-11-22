/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 21:09:47 by obelange          #+#    #+#             */
/*   Updated: 2016/08/18 21:25:08 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int i);

int		main(void)
{
	int i;

	i = 0;
	printf("24 hour\n");
	while (i < 25)
	{
		ft_takes_place(i);
		i++;
	}
	i = 0;
	printf("\n\n2400 hour\n");
	while (i < 2500)
	{
		ft_takes_place(i);
		i += 100;
	}
	printf("\n\n2352\n");
	ft_takes_place(2352);
	printf("\n\n1185\n");
	ft_takes_place(1185);
}
