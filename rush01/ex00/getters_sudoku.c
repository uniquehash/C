/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getters_sudoku.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 22:11:06 by obelange          #+#    #+#             */
/*   Updated: 2016/08/21 22:11:07 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "sudoku.h"

int		get_num_spaces(int *sudoku)
{
	int index;
	int puzzle_spaces;

	puzzle_spaces = 0;
	index = 0;
	while (index < 81)
	{
		if (sudoku[index] == 0)
			puzzle_spaces++;
		index++;
	}
	return (puzzle_spaces);
}

int		get_num_clues(int *sudoku)
{
	int index;
	int puzzle_clues;

	puzzle_clues = 0;
	index = 0;
	while (index < 81)
	{
		if (sudoku[index] > 0)
			puzzle_clues++;
		index++;
	}
	return (puzzle_clues);
}

int		*get_puzzle_indices(int *sudoku, int size)
{
	int index;
	int puzzle_index;
	int *indices;

	index = 0;
	puzzle_index = 0;
	indices = (int*)malloc(size * sizeof(int));
	while (index < 81)
	{
		if (sudoku[index] == 0)
		{
			indices[puzzle_index] = index;
			puzzle_index++;
		}
		index++;
	}
	return (indices);
}
