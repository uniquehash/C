/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/25 22:47:07 by obelange          #+#    #+#             */
/*   Updated: 2016/08/25 23:47:05 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int		main(void)
{
	t_btree *node;
	t_btree *root;
	
	root = btree_create_node("A");
	root->left = btree_create_node("B");
	root->right = btree_create_node("C");
	
	node = root->left;
	node->left = btree_create_node("E");
	node->right = btree_create_node("F");
	
	btree_apply_prefix(root, &print_void);		

	return (0);
}
