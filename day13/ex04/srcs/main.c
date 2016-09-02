/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/25 22:47:07 by obelange          #+#    #+#             */
/*   Updated: 2016/08/26 23:13:20 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int		main(void)
{
	t_btree *root;

	root = NULL;	
	ft_putstr("\ntry1\n");
	btree_insert_data(&root, "3" , &ft_voidcmp);			
	ft_putstr("\ntry2");
	btree_insert_data(&root, "5" , &ft_voidcmp);		
	ft_putstr("\ntry3");
	btree_insert_data(&root, "2" , &ft_voidcmp);		
	ft_putstr("\ntry4");
	//btree_apply_infix(root, &print_void);
	
	//btree_insert_data(&root, "6" , &ft_voidcmp);		
	//btree_insert_data(&root, "3" , &ft_voidcmp);		
	//btree_insert_data(&root, "4" , &ft_voidcmp);		


	return (0);
}
