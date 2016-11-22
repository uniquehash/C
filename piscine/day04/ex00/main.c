/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 15:38:00 by obelange          #+#    #+#             */
/*   Updated: 2016/08/13 16:08:43 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int 	ft_iterative_factorial(int nb);

int		main(void)
{
	int x;
	int i;	

	i = 9;
	x = ft_iterative_factorial(i);
	
	printf("the factorial of %d is: %d", i, x);

	return (0);
}
