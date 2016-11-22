/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/26 14:01:29 by obelange          #+#    #+#             */
/*   Updated: 2016/08/26 23:18:56 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *d, int (*cmpf)(void *, void *))
{
	int x;
	if (*root)
	{

		cmpf(d, (*root)->item);
		ft_putstr("\nroot->item: ");
		ft_putstr((*root)->item);
		ft_putstr(" cmp: ");
		ft_putnbr(x);	
		ft_putstr("\n");
		
		if (cmpf(d, (*root)->item) < 0)
		{
			ft_putstr("left->\n");
			btree_insert_data(&(*root)->left, d, cmpf);
		}
		else
		{
			ft_putstr("right->\n");
			btree_insert_data(&(*root)->right, d, cmpf);
		}
	}
	else
	{
		ft_putstr("create_node: ");
		ft_putstr(d);
		ft_putstr("\n");
		*root = btree_create_node(d);
	}
}
