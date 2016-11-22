/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/26 14:01:29 by obelange          #+#    #+#             */
/*   Updated: 2016/08/26 23:33:57 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *d, int (*cmpf)(void *, void *))
{
	if (*root)
	{
		if (cmpf(d, (*root)->item) < 0)
		{
			btree_insert_data(&(*root)->left, d, cmpf);
		}
		else
		{
			btree_insert_data(&(*root)->right, d, cmpf);
		}
	}
	else
	{
		*root = btree_create_node(d);
	}
}
