/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csummers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/31 12:26:31 by csummers          #+#    #+#             */
/*   Updated: 2016/08/31 12:26:31 by csummers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

/*
** Frees all mallocated memory contained in global variables
** and resets all other global variables to 0
**
** The g_*_malloc_error flag showing TRUE will prohibit freeing to happen
** when the corresponding global variables are not properly malloced
*/

void	free_all(void)
{
	int i;

	if (g_map_malloc_error == FALSE)
	{
		i = 0;
		while (i < g_map_dims[0])
			free(g_map[i++]);
		free(g_map);
	}
	if (g_input_malloc_error == FALSE)
		free(g_input);
	g_input_len = 0;
	g_map_dims[0] = 0;
	g_map_dims[1] = 0;
	g_map_dims[2] = 0;
	g_legend[0] = 0;
	g_legend[1] = 0;
	g_legend[2] = 0;
	g_max_coords[0] = 0;
	g_max_coords[1] = 0;
	g_max_coords[2] = 0;
	g_map_malloc_error = FALSE;
	g_input_malloc_error = FALSE;
}
