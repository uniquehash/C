/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 14:29:19 by obelange          #+#    #+#             */
/*   Updated: 2016/08/23 15:12:08 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_sort(int *tab, int length, int (*f)(int, int));

int		compare_numb(int high, int low)
{
	return (high - low);
}

int		main(void)
{
	int a[4] = {6,4,3,2};
	int b[4] = {2,3,4,5};
	int c[4] = {2,2,2,2};
	int d[4] = {4,2,4,6};
	int e[4] = {6,4,2,4};
	int x;

	x = ft_is_sort(a, 4, &compare_numb);
	printf("a ft sort: %d\n", x);
	
	x = ft_is_sort(b, 4, &compare_numb);
	printf("b ft sort: %d\n", x);
	
	x = ft_is_sort(c, 4, &compare_numb);
	printf("c ft sort: %d\n", x);

	x = ft_is_sort(d, 4, &compare_numb);
	printf("d ft sort: %d\n", x);

	x = ft_is_sort(e, 4, &compare_numb);
	printf("e ft sort: %d\n", x);
}




