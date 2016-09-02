/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 17:59:49 by obelange          #+#    #+#             */
/*   Updated: 2016/08/24 22:57:09 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		main(int argc, char **argv)
{
	t_list *node;

	if (argc > 1)
	{
		node = ft_list_push_params(argc, argv);
		ft_print_list(node);
	}


	return (0);
}
