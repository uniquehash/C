/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 22:31:52 by obelange          #+#    #+#             */
/*   Updated: 2016/08/24 23:27:00 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*tmp;
	t_list	*node;

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

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	**list;
	t_list	*head;
	int		i;

	i = 2;
	head = NULL;
	if (ac > 1)
	{
		head = ft_create_elem(av[1]);
		list = &head;
		while (i < (ac))
		{
			ft_list_push_back(list, av[i]);
			i++;
		}
	}
	return (head);
}
