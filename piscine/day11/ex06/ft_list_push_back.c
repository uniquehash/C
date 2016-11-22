/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 18:43:33 by obelange          #+#    #+#             */
/*   Updated: 2016/08/24 19:34:56 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *node;

	node = *begin_list;
	if (!node)
		node = ft_create_elem(data);
	else
	{
		while (node->next)
			node = node->next;
		node->next = ft_create_elem(data);
	}
}
