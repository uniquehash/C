/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_sudoku.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 22:07:51 by obelange          #+#    #+#             */
/*   Updated: 2016/08/21 22:07:52 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		is_valid_square(int *sudoku, int srow, int scol)
{
	int index_x;
	int index_y;
	int *numbers;
	int digit;

	numbers = (int[]){-1, -1, -1, -1, -1, -1, -1, -1, -1};
	index_x = 0;
	index_y = 0;
	while (index_y < 3)
	{
		while (index_x < 3)
		{
			digit = sudoku[(y_sq(srow, index_y) * 9) + x_sq(scol, index_x)];
			if (digit != numbers[digit - 1] && digit != 0)
				numbers[digit - 1] = digit;
			else if (digit != 0)
				return (FALSE);
			index_x++;
		}
		index_x = 0;
		index_y++;
	}
	return (TRUE);
}

int		is_valid_line(int *sudoku, int num, int type)
{
	int index;
	int *numbers;
	int digit;

	numbers = (int[]){-1, -1, -1, -1, -1, -1, -1, -1, -1};
	index = 0;
	while (index < 9)
	{
		if (type == ROW)
			digit = sudoku[ROW_INDEX];
		else if (type == COLUMN)
			digit = sudoku[COLUMN_INDEX];
		if (digit != numbers[digit - 1] && digit != 0)
			numbers[digit - 1] = digit;
		else if (digit != 0)
			return (FALSE);
		index++;
	}
	return (TRUE);
}

int		is_valid_puzzle(int *sudoku)
{
	int index;

	index = 0;
	while (index < 9)
	{
		if (CHECK_ROW_COLUMN_BOX(index, sudoku) == FALSE)
			return (FALSE);
		index++;
	}
	return (TRUE);
}

int		board_clean_finish(int *board)
{
	int i;

	i = 0;
	while (i < 81)
	{
		if (board[i] == 0)
			return (FALSE);
		i++;
	}
	return (TRUE);
}
