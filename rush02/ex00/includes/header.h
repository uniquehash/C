/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/28 11:33:58 by zhu               #+#    #+#             */
/*   Updated: 2016/08/28 23:44:00 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>
# include <fcntl.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <stdlib.h>

# define BUF_SIZE 40

typedef struct		s_list
{
	char			*str;
	struct s_list	*next;
}					t_list;

t_list				*ft_create_elem(char *str);
void				ft_list_push_back(t_list **begin_list, char *str);
void				ft_putchar(char c);
void				ft_putstr(char *str);
void				ft_show(int nb, int col, int row, int tab);
void				ft_print_list(t_list *root);
char				*char_rush00(int x, int y, int x_i, int y_i);
char				*char_rush01(int x, int y, int x_i, int y_i);
char				*char_rush02(int x, int y, int x_i, int y_i);
char				*char_rush03(int x, int y, int x_i, int y_i);
char				*char_rush04(int x, int y, int x_i, int y_i);
int					ft_add_tab(int *tab);
char				*ft_strcpy(char *dest, char *src);
char				*ft_strcat(char *dest, char *src);
int					ft_strlen(char *str);
int					ft_strcmp(char *s1, char *s2);
char				*ft_strcat1(t_list *node, int len, int i);
int					ft_rush00(char *str, int col, int row);
int					ft_rush01(char *str, int col, int row);
int					ft_rush02(char *str, int col, int row);
int					ft_rush03(char *str, int col, int row);
int					ft_rush04(char *str, int col, int row);
int					*ft_get_size(char *str);
void				ft_print_result(char *str);

#endif
