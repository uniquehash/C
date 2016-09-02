/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_up_legend_and_map.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csummers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/31 11:38:52 by csummers          #+#    #+#             */
/*   Updated: 2016/08/31 18:04:36 by csummers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

/*
** Sets up g_map_dims as such:
** 0: number of rows
** 1: number of columns (NOT given - we find it)
** 2: legend offset (the index where the first '\n' occurs) (also NOT given)
**
** Sets up g_legend as such:
** 0: "empty" character
** 1: "obstacle" character
** 2: "full" character
*/

/*
** Reads file (from argv or stdin) to mallocated global string g_input
** then determines legend and the legend offset
** then calls function that determines the row and col counts
** then calls function that mallocs the map then fills it with chars
** then frees the global string g_input
**
** Returns error (FALSE) if the legend is improper in any way
** or there is no map
** or any row in the map is the wrong length
** or the legend lies about the number of rows
** or the legend allocates two legend characters to the same thing
** of open throws an error
** or read throws an error
** or close throws an error
** or malloc throws an error
*/

int		set_up_legend_and_map(char *file)
{
	int		legend_offset;

	if (read_file_to_char_array(file) == -1)
		return (FALSE);
	legend_offset = 0;
	while (g_input[legend_offset] != '\n' && g_input[legend_offset] != '\0')
		legend_offset++;
	if (g_input[legend_offset] == '\0')
		return (FALSE);
	g_legend[0] = g_input[legend_offset - 3];
	g_legend[1] = g_input[legend_offset - 2];
	g_legend[2] = g_input[legend_offset - 1];
	if (g_legend[0] == g_legend[1] || g_legend[0] == g_legend[2] ||
		g_legend[1] == g_legend[2])
		return (FALSE);
	g_map_dims[2] = legend_offset;
	if (determine_row_and_col_count() == FALSE)
		return (FALSE);
	if (g_input[g_map_dims[2] + g_map_dims[0] * (g_map_dims[1] + 1)] != '\n')
		g_map_malloc_error = TRUE;
	if (g_input[g_map_dims[2] + g_map_dims[0] * (g_map_dims[1] + 1)] != '\n')
		return (FALSE);
	if (fill_map() == FALSE)
		return (FALSE);
	return (TRUE);
}

/*
** Reads the given file (from argv or stdin) to the global string g_input
**
** Returns error (FALSE) if open throws an error
** or malloc throws an error
** or read throws an error
** or close throws an error
*/

int		read_file_to_char_array(char *file)
{
	int		fd;
	int		reader;
	char	buffer[BUFF_SIZE + 1];

	g_input[0] = '\0';
	if (file != 0)
	{
		if ((fd = open(file, O_RDONLY)) == -1)
			return (FALSE);
	}
	else
		fd = 0;
	while ((reader = read(fd, buffer, BUFF_SIZE)))
	{
		if (reader == -1)
			return (FALSE);
		buffer[reader] = '\0';
		if (ft_strcat_to_g_input(buffer) == FALSE)
			return (FALSE);
	}
	if (close(fd) == -1)
		return (FALSE);
	return (TRUE);
}

/*
** Concatenates the current buffer recently read from argv or stdin
** to g_input
**
** Frees the old g_input so there is no multiple mallocations for g_input
**
** Returns error (FALSE) if malloc throws an error
*/

int		ft_strcat_to_g_input(char *s)
{
	int		i;
	int		s_len;
	char	*result;

	s_len = 0;
	while (s[s_len] != '\0')
		s_len++;
	if ((result = (char*)malloc(sizeof(char) * (g_input_len + s_len + 1))) == 0)
		return (FALSE);
	i = -1;
	while (++i < g_input_len)
		result[i] = g_input[i];
	i = -1;
	while (++i < s_len)
		result[g_input_len + i] = s[i];
	result[g_input_len + s_len] = '\0';
	g_input_len += s_len;
	free(g_input);
	g_input = result;
	return (TRUE);
}

/*
** Sets g_map_dims[0] to row_count as given by legend
** and sets g_map_dims[1] to col_count as determined by counting chars
** in the first row after the legend
**
** Returns an error (FALSE) if the first char is not a number
** or there is no row count (g_input[legend_offset - 3] is the first char)
** or the row count is set equal to zero
*/

int		determine_row_and_col_count(void)
{
	int		i;
	int		col_count;

	i = 0;
	while (i < g_map_dims[2] - 3)
	{
		if (g_input[i] < '0' || g_input[i] > '9')
			return (FALSE);
		i++;
	}
	if (i == 0)
		return (FALSE);
	col_count = 0;
	i = g_map_dims[2];
	while (g_input[++i] != '\n' && g_input[i] != '\0')
		col_count++;
	g_map_dims[0] = ft_atoi(g_input);
	g_map_dims[1] = col_count;
	if (g_map_dims[0] == 0 || g_map_dims[1] == 0)
	{
		g_map_malloc_error = TRUE;
		return (FALSE);
	}
	return (TRUE);
}

/*
** Fills the char part of each of map's t_map_b units
** the integers are filled in determine_map to solve the algorithm
**
** Returns error (FALSE) if malloc throws an errror
** or any row is the wrong size (if two rows add up to the length of one row
** then that will be found in is_valid)
** or if the final character is not a null character (indicating that the
** legend lied about how many rows there are)
*/

int		fill_map(void)
{
	int		i;
	int		j;

	i = 0;
	free(g_map);
	if ((g_map = (t_map_b**)malloc(sizeof(t_map_b*) * g_map_dims[0])) == 0)
		return (FALSE);
	while (i < g_map_dims[0])
	{
		if (g_input[g_map_dims[2] + i * (g_map_dims[1] + 1)] != '\n')
			return (FALSE);
		if ((g_map[i] = (t_map_b*)malloc(sizeof(t_map_b) * g_map_dims[1])) == 0)
			return (FALSE);
		j = 0;
		while (j < g_map_dims[1])
		{
			g_map[i][j].lett = g_input[(g_map_dims[2] + 1) +
										i * (g_map_dims[1] + 1) + j];
			j++;
		}
		i++;
	}
	if (g_input[g_map_dims[2] + 1 + i * (g_map_dims[1] + 1)] != '\0')
		return (FALSE);
	return (TRUE);
}
