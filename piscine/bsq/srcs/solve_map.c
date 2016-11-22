/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csummers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/31 12:42:49 by csummers          #+#    #+#             */
/*   Updated: 2016/08/31 12:42:50 by csummers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

/*
** Algorithm overview:
**
** We need to check to see where the largest square is
** so lets associate a number with each character on the map
**
** If the character is an obstacle than set it to 0
** because the bottom-right corner of a square cannot include that point
**
** If the character is on the top or left sides of the map, set it to 1
** because a square with the bottom-right corner starting at that point
** can only be of size 1
**
** Anywhere else, set the number to the minimum of the numbers associated
** with the characters immediately to the top, to the left, and to the top-left
** then add one - the result will be the size of the square with the
** bottom-right cornerat that point
**
** Then keep track of the maximum number's coordinates and print a square of
** full characters with the bottom-right corner being those coordinates -
** the length of each side of this square will be the maximum number itself
**
** Example:
** empty character: '.' , obstacle character: 'o' , full character: 'x'
** (char map)     (calculated numb map)     (updated char map)
**   ....o                11110                    ....o
**   .o...                10121                    .oxxx
**   .....      --->      11122        --->        ..xxx
**   .....                12223                    ..xxx
**   o..o.                01201                    o..o.
*/

/*
** Iterates through map and sets the numbers for the map
** then calls function that updates the map to the solved version
**
** Returns error (FALSE) if any letter in the map is not either
** an empty character or an obstacle character
**
** Sets up g_max_coords as such:
** g_max_coords[0] = row of maximum coordinate
** g_max_coords[1] = col of maximum coordinate
** g_max_coords[2] = number at maximum coordinate
*/

int		solve_map(void)
{
	int		i;
	int		j;

	i = -1;
	while (++i < g_map_dims[0])
	{
		j = -1;
		while (++j < g_map_dims[1])
			if (determine_number(i, j) == FALSE)
				return (FALSE);
	}
	update_map();
	return (TRUE);
}

/*
** Sets the number at the g_map at point (i,j) as determined
** by the algorithm and stores the maximum of all numbers
** in g_max_coords as well as its coordinates
**
** Note that should there be more than one solution that the first one
** is returned, which will be the top-most then the left-most as
** requested by the spec
**
** Returns error (FALSE) if any letter in the map is not either
** an empty character or an obstacle character
*/

int		determine_number(int i, int j)
{
	if (g_map[i][j].lett == g_legend[1])
		g_map[i][j].numb = 0;
	else if (g_map[i][j].lett != g_legend[0])
		return (FALSE);
	else if (i == 0 || j == 0)
		g_map[i][j].numb = 1;
	else
		g_map[i][j].numb = (min_of_top_left_topleft(i, j) + 1);
	if (g_map[i][j].numb > g_max_coords[2])
	{
		g_max_coords[0] = i;
		g_max_coords[1] = j;
		g_max_coords[2] = g_map[i][j].numb;
	}
	return (TRUE);
}

/*
** Returns the minimum of the numbers associated with
** the map boxes immediately on top of, to the top-left of,
** and to the left of the given coordinate (i,j)
*/

int		min_of_top_left_topleft(int i, int j)
{
	if (g_map[i - 1][j].numb <= g_map[i - 1][j - 1].numb &&
		g_map[i - 1][j].numb <= g_map[i][j - 1].numb)
		return (g_map[i - 1][j].numb);
	else if (g_map[i][j - 1].numb <= g_map[i - 1][j - 1].numb &&
				g_map[i][j - 1].numb <= g_map[i - 1][j].numb)
		return (g_map[i][j - 1].numb);
	else
		return (g_map[i - 1][j - 1].numb);
}

/*
** Updates g_map so that the chars corresponding to the
** calculated square are transformed from the empty character
** to the full character
*/

void	update_map(void)
{
	int		i;
	int		j;

	i = g_max_coords[0] - g_max_coords[2];
	while (++i <= g_max_coords[0])
	{
		j = g_max_coords[1] - g_max_coords[2];
		while (++j <= g_max_coords[1])
			g_map[i][j].lett = g_legend[2];
	}
}
