/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   llist_create_elem.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 23:31:37 by obelange          #+#    #+#             */
/*   Updated: 2016/09/01 23:44:49 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_list		*llist_create_elem(void *data)
{
	t_list	*node;

	node = 0;
	node = malloc(sizeof(t_list));
	if (node)
	{
		node->next = 0;
		node->data = data;
	}
	return (node);
}
