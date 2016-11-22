/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 20:27:07 by obelange          #+#    #+#             */
/*   Updated: 2016/08/24 21:24:35 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *tmp;
	t_list *node;

	tmp = *begin_list;
	if (!tmp)
		tmp = ft_create_elem(data);
	else
	{
		node = ft_create_elem(data);
		node->next = tmp;
		*begin_list = node;
	}
}
