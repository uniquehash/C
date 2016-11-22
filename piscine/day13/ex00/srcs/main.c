/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/25 22:47:07 by obelange          #+#    #+#             */
/*   Updated: 2016/08/25 23:03:01 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int		main(void)
{
	t_btree *node;

	node = btree_create_node("help im stuck up a tree");
	print_node(node);
	return (0);
}
