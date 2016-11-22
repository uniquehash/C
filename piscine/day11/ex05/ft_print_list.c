/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 18:03:14 by obelange          #+#    #+#             */
/*   Updated: 2016/08/24 23:01:56 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_print_list(t_list *node)
{
	while (node)
	{
		ft_putstr(node -> data);
		ft_putstr("\n");
		node = node -> next;
	}
}
