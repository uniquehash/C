/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   llist_push_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 23:35:14 by obelange          #+#    #+#             */
/*   Updated: 2016/09/01 23:37:36 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	llist_push_back(t_list **begin_list, void *data)
{
	t_list *list;

	list = *begin_list;
	if (list)
	{
		while (list->next)
			list = list->next;
		list->next = llist_create_elem(data);
	}
	else
		*begin_list = llist_create_elem(data);
}
