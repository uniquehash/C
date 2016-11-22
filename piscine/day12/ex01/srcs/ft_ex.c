/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/25 11:24:34 by obelange          #+#    #+#             */
/*   Updated: 2016/08/25 21:03:59 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_file.h"

void	ft_read(char *str, int src)
{
	int		fd;
	int		bytes_read;
	char	buf[BUF_SIZE + 1];
	int		x;

	if (src == RFILE)
	{
		fd = open(str, O_RDONLY);
		if (fd < 0)
			ft_puterr(ft_strerror(errno));
		while ((bytes_read = read(fd, buf, BUF_SIZE)))
			write(1, buf, bytes_read);
		fd = close(fd);
		if (fd == -1)
			ft_puterr(ft_strerror(errno));
	}
	else if (src == RSTDIN)
	{
		while ((bytes_read = read(0, buf, BUF_SIZE)) > 0)
			write(1, buf, bytes_read);
	}
}

void	ft_ex(int ac, char **argv, int i)
{
	while (i < ac)
	{
		if (ac < 2 || argv[i][0] == '-')
			ft_read(argv[i], RSTDIN);
		else
			ft_read(argv[i], RFILE);
		i++;
	}
}
