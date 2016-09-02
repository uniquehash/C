/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 22:02:01 by obelange          #+#    #+#             */
/*   Updated: 2016/08/21 22:02:03 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SUDOKU_H
# define FT_SUDOKU_H
# include <unistd.h>
# include <stdlib.h>
# define NUM_INDEX ((3 * index_y) + index_x)
# define ROW_INDEX ((num * 9) + index)
# define COLUMN_INDEX ((index * 9) + num)
# define ROW 0
# define COLUMN 1
# define FALSE 0
# define TRUE 1
# define SQUARE(n) (n / 3), n % 3
# define CHECK_ROW_COLUMN_BOX(n, sudoku)(check_row_column_box(n, sudoku))
# define IS_PUZZLE_SQUARE()

void	print_line(int *sudoku, int num, int type);
void	print_square(int *sudoku);
void	duplicate_board(int *dest, int *src);
void	init_board(int *array);
void	converter(int puzzle[9][9], char **argv);
int		is_valid_square(int *sudoku, int srow, int scol);
int		is_valid_line(int *sudoku, int num, int type);
int		is_valid_puzzle(int *sudoku);
int		get_num_spaces(int *sudoku);
int		get_num_clues(int *sudoku);
int		*get_puzzle_indices(int *sudoku, int size);
void	ft_insert_elem(int *sudoku, int index, int value);
int		rev_do_sudoku(int *sudoku, int puzzle_index, int value, int i);
int		do_sudoku(int *sudoku, int puzzle_index, int value, int i);
int		one_win(int solution1[9][9], int solution2[9][9]);
int		board_clean_finish(int *board);
int		check_row_column_box(int n, int *sudoku);
int		x_sq(int scol, int index_x);
int		y_sq(int srow, int index_y);

#endif
