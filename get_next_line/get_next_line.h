/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 09:43:27 by obelange          #+#    #+#             */
/*   Updated: 2016/11/09 20:06:30 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 8
# define ARR_SIZE 2147483648
# define NULLGUARD(INPUT) if ((INPUT) == NULL) return (-1)
# define FGUARD(INPUT) if ((INPUT) == -1) return (-1)
# include <stdlib.h>
# include <fcntl.h>

typedef struct	s_line_elem
{
	char				*re[5005];
	int					fd;
	int					st[5005];
	int					s[5005];
	int					flag[5005];
	size_t				index;
	char const			*delim;
	struct s_line_elem	*nxt;
	struct s_line_elem	*prev;
}				t_line_elem;

int				get_next_line(const int fd, char **line);

#endif
