/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/27 20:10:22 by zhu               #+#    #+#             */
/*   Updated: 2016/08/28 23:16:48 by zhu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <header.h>

t_list	*ft_create_elem(char *str)
{
	t_list	*new_elem;
	char	*new_str;

	new_str = (char*)malloc(sizeof(char) * (ft_strlen(str) + 1));
	new_elem = malloc(sizeof(t_list));
	new_str = ft_strcpy(new_str, str);
	if (new_elem)
	{
		new_elem->str = new_str;
		new_elem->next = NULL;
	}
	return (new_elem);
}

void	ft_list_push_back(t_list **begin_list, char *str)
{
	t_list *list;

	list = *begin_list;
	if (list)
	{
		while (list->next)
			list = list->next;
		list->next = ft_create_elem(str);
	}
	else
		*begin_list = ft_create_elem(str);
}

void	ft_print_list(t_list *root)
{
	int i;

	i = 0;
	while (root->next)
	{
		root = root->next;
		i++;
	}
}
