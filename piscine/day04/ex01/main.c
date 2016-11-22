/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 16:11:19 by obelange          #+#    #+#             */
/*   Updated: 2016/08/13 16:21:29 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_factorial(int nb);

int		main(void)
{
	int x;
	int y;
	
	y = -1;
	x = ft_recursive_factorial(y);

	printf("the factorial of %d is: %d", y, x);
	return (0);
}
