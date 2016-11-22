/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 17:59:49 by obelange          #+#    #+#             */
/*   Updated: 2016/08/24 19:24:03 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		main(void)
{
	char *str; 
	t_list	*node; 
	t_list **list;
	
	node = ft_create_elem("10");	
	list = &node;

	str = "1";
	ft_list_push_back(list, str);	

	str = "2";
	ft_list_push_back(list, str);	

	str = "3";
	ft_list_push_back(list, str);	

	ft_print_list(*list);

	return (0);
}
