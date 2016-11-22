/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 09:43:16 by obelange          #+#    #+#             */
/*   Updated: 2016/10/27 09:43:18 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft/libft.h"

static	int	line_in_buffer(char **line, char **remain, char const *c)
{
	char	*chr;
	char	*tmp;
	size_t	i_of_n;
	size_t	size;

	chr = ft_strchr(*remain, '\n');
	if (ft_stric(*remain, c, &i_of_n) == 0)
		i_of_n = ft_strlen(*remain);
	NULLGUARD(*line = ft_strsub(*remain, 0, i_of_n));
	tmp = *remain;
	if (chr)
	{
		size = ft_strlen(chr);
		NULLGUARD(*remain = ft_strsub(*remain, ++i_of_n, size));
		ft_strdel(&tmp);
	}
	return (1);
}

static	int	line_o_buff(const int fd, char **remain, int *status)
{
	char	*tmp;
	char	buff[BUFF_SIZE + 1];
	int		stat;
	int		x;

	stat = -1;
	ft_bzero(buff, BUFF_SIZE + 1);
	if ((x = read(fd, buff, BUFF_SIZE) > 0))
	{
		stat = 1;
		tmp = *remain;
		*remain = ft_strmcat(*remain, buff);
		ft_strdel(&tmp);
		return (stat);
	}
	if (!*remain)
		return (0);
	if ((*remain)[0])
	{
		*status = 0;
		return (2);
	}
	return (0);
}

static	int	new_elem(t_line_elem **elem, const int fd, char **line)
{
	if (fd > 5000 || fd < 0)
		return (-1);
	FGUARD(read(fd, "", 0));
	if (!(*elem))
	{
		NULLGUARD(*elem = (t_line_elem*)malloc(sizeof(t_line_elem)));
		(*elem)->fd = fd;
		((*elem)->index) = 0;
		(*elem)->delim = "\n";
		((*elem)->st)[fd] = -1;
		((*elem)->s)[fd] = -1;
		((*elem)->re)[fd] = NULL;
		((*elem)->flag)[fd] = 32768;
	}
	if ((((*elem)->flag)[fd]) != 32768)
	{
		((*elem)->flag)[fd] = 32768;
		(*elem)->fd = fd;
		((*elem)->st)[fd] = -1;
		((*elem)->s)[fd] = -1;
		((*elem)->re)[fd] = NULL;
	}
	if (line)
		NULLGUARD(*line = ft_strnew(0));
	return (0);
}

int			get_next_line(const int fd, char **line)
{
	static t_line_elem *e;

	FGUARD(new_elem(&e, fd, line));
	if (fd > -1 && line)
	{
		if ((e->st)[fd]-- == 0)
		{
			ft_bzero(*line, ft_strlen(*line));
			return (0);
		}
		while (ft_stric((e->re)[fd], e->delim, &(e->index)) < 1)
		{
			FGUARD((e->s)[fd] = line_o_buff(fd, &((e->re)[fd]), &(e->st)[fd]));
			if ((e->s)[fd] == 0)
			{
				ft_bzero(*line, ft_strlen(*line));
				break ;
			}
			else if ((e->s)[fd] == 2)
				return (line_in_buffer(line, &((e->re)[fd]), e->delim));
		}
		if (ft_stric((e->re)[fd], e->delim, &(e->index)) == 1)
			return (line_in_buffer(line, &((e->re))[fd], e->delim));
	}
	return ((e->s)[fd]);
}
