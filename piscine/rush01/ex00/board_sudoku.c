/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_board.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 21:56:56 by obelange          #+#    #+#             */
/*   Updated: 2016/08/21 21:56:59 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

void	print_line(int *sudoku, int num, int type)
{
	int		index;
	int		digit;
	char	c;

	index = 0;
	while (index < 9)
	{
		if (type == ROW)
		{
			digit = sudoku[ROW_INDEX];
		}
		else if (type == COLUMN)
		{
			digit = sudoku[COLUMN_INDEX];
		}
		c = (digit + '0');
		write(1, &c, 1);
		write(1, " ", 1);
		index++;
	}
	write(1, "\n", 1);
}

void	print_square(int *sudoku)
{
	print_line((int*)sudoku, 0, ROW);
	print_line((int*)sudoku, 1, ROW);
	print_line((int*)sudoku, 2, ROW);
	print_line((int*)sudoku, 3, ROW);
	print_line((int*)sudoku, 4, ROW);
	print_line((int*)sudoku, 5, ROW);
	print_line((int*)sudoku, 6, ROW);
	print_line((int*)sudoku, 7, ROW);
	print_line((int*)sudoku, 8, ROW);
}

void	duplicate_board(int *dest, int *src)
{
	int i;

	i = 0;
	while (i < 81)
	{
		dest[i] = src[i];
		i++;
	}
}

void	init_board(int *array)
{
	int i;

	i = 0;
	while (i < 81)
	{
		array[i] = 0;
		i++;
	}
}

void	converter(int puzzle[9][9], char **argv)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 9)
	{
		while (j < 9)
		{
			if (argv[i + 1][j] > 47 && argv[i + 1][j] < 58)
				puzzle[i][j] = (argv[i + 1][j] - 48);
			j++;
		}
		j = 0;
		i++;
	}
}
