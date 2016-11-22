/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 21:33:15 by obelange          #+#    #+#             */
/*   Updated: 2016/08/22 21:58:55 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_foreach(int *tab, int length, void (*f)(int));
void	ft_putnbr(int nb);

int		main(void)
{
	int len = 3;
	int tab[3] = {0, 1, 2};

	ft_foreach(tab, len, &ft_putnbr);
	
	return (0);
}
