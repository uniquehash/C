/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csummers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/30 10:15:29 by csummers          #+#    #+#             */
/*   Updated: 2016/08/31 18:34:00 by csummers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int		main(int argc, char **argv)
{
	int			i;

	i = -1;
	while (++i < argc)
	{
		if ((g_map = (t_map_b**)malloc(sizeof(t_map_b*))) == FALSE)
		{
			g_map_malloc_error = TRUE;
			write(2, "map error\n", 10);
		}
		else if ((g_input = (char*)malloc(sizeof(char))) == FALSE)
		{
			g_input_malloc_error = TRUE;
			write(2, "map error\n", 10);
		}
		else if (handle_input(&i, argc, argv) == FALSE || solve_map() == FALSE)
			write(2, "map error\n", 10);
		else
			print_map();
		free_all();
	}
	return (0);
}

int		handle_input(int *i, int argc, char **argv)
{
	if (*i == 0 && argc == 1)
	{
		if (set_up_legend_and_map(0) == FALSE)
			return (FALSE);
	}
	else if (*i == 0 && argc != 1)
	{
		if (set_up_legend_and_map(argv[++(*i)]) == FALSE)
			return (FALSE);
	}
	else
	{
		write(1, "\n", 1);
		if (set_up_legend_and_map(argv[*i]) == FALSE)
			return (FALSE);
	}
	return (TRUE);
}
