/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 20:21:24 by obelange          #+#    #+#             */
/*   Updated: 2016/08/22 21:35:15 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

void	insert_elem(int *sudoku, int index, int value)
{
	sudoku[index] = value;
}

int		rev_do_sudoku(int *sudoku, int puzzle_index, int value, int i)
{
	if (sudoku[puzzle_index] != 0)
		rev_do_sudoku(sudoku, puzzle_index + 1, value, 9);
	else
	{
		while (i > 0)
		{
			if (is_valid_puzzle(sudoku) == TRUE && get_num_spaces(sudoku) == 0)
				return (1);
			insert_elem(sudoku, puzzle_index, i);
			if (is_valid_puzzle(sudoku) == TRUE)
			{
				if (get_num_spaces(sudoku) == 0)
					return (1);
				else
					rev_do_sudoku(sudoku, puzzle_index + 1, value, 9);
			}
			else
				insert_elem(sudoku, puzzle_index, value);
			i--;
		}
		if (is_valid_puzzle(sudoku) == TRUE && get_num_spaces(sudoku) == 0)
			return (1);
		insert_elem(sudoku, puzzle_index, value);
	}
	return (0);
}

int		do_sudoku(int *sudoku, int puzzle_index, int value, int i)
{
	
	print_square(sudoku);
	if (sudoku[puzzle_index] != 0)
		do_sudoku(sudoku, puzzle_index + 1, value, 1);
	else
	{
		while (i < 10)
		{
			if (is_valid_puzzle(sudoku) == TRUE && get_num_spaces(sudoku) == 0)
				return (1);
			insert_elem(sudoku, puzzle_index, i);
			if (is_valid_puzzle(sudoku) == TRUE)
			{
				if (get_num_spaces(sudoku) == 0)
					return (1);
				else
					do_sudoku(sudoku, puzzle_index + 1, value, 1);
			}
			else
				insert_elem(sudoku, puzzle_index, value);
			i++;
		}
		if (is_valid_puzzle(sudoku) == TRUE && get_num_spaces(sudoku) == 0)
			return (1);
		insert_elem(sudoku, puzzle_index, value);
	}
	return (0);
}

int		one_win(int solution1[9][9], int solution2[9][9])
{
	int a;
	int b;

	a = 0;
	while (a < 9)
	{
		b = 0;
		while (b < 9)
		{
			if (solution1[a][b] != solution2[a][b])
				return (FALSE);
			b++;
		}
		a++;
	}
	return (TRUE);
}

int		main(int argc, char **argv)
{
	int a[9][9];
	int dup[9][9];
	int puzzle_spaces;
	int *puzzle_indices;
	int puzzle_clues;

	(void)argc;
	init_board((int*)a);
	converter(a, argv);
	puzzle_spaces = get_num_spaces((int*)a);
	puzzle_indices = get_puzzle_indices((int*)a, puzzle_spaces);
	puzzle_clues = get_num_clues((int*)a);
	if (is_valid_puzzle((int*)a) == FALSE || puzzle_clues < 17)
		write(1, "Error\n", 6);
	else
	{
		duplicate_board((int*)dup, (int*)a);
		do_sudoku((int*)a, puzzle_indices[0], 0, 1);
		// rev_do_sudoku((int*)dup, puzzle_indices[0], 0, 9);
		if (one_win(a, dup) == TRUE && board_clean_finish((int*)a) == TRUE)
			// print_square((int*)a);
		else
			write(1, "Error\n", 6);
	}
	return (0);
}
