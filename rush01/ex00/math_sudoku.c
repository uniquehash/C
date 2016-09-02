/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math_sudoku.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 23:22:27 by obelange          #+#    #+#             */
/*   Updated: 2016/08/21 23:22:28 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		check_row_column_box(int n, int *sudoku)
{
	if (is_valid_square(sudoku, SQUARE(n)) && is_valid_line(sudoku, n, COLUMN))
		if (is_valid_line(sudoku, n, ROW) == TRUE)
			return (TRUE);
		else
			return (FALSE);
	else
		return (FALSE);
}

int		x_sq(int scol, int index_x)
{
	return ((3 * scol) + index_x);
}

int		y_sq(int srow, int index_y)
{
	return ((3 * srow) + index_y);
}
