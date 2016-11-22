/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/25 11:24:34 by obelange          #+#    #+#             */
/*   Updated: 2016/08/25 21:22:36 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_file_display.h"

void	ft_ex(char *str)
{
	int		fd;
	int		bytes_read;
	char	buf[BUF_SIZE + 1];

	fd = open(str, O_RDONLY);
	while ((bytes_read = read(fd, buf, BUF_SIZE)))
	{
		buf[bytes_read] = '\0';
		ft_putstr(buf);
	}
	close(fd);
	ft_putstr("\0");
}
