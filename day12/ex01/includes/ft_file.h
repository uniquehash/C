/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_display.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/25 11:11:58 by obelange          #+#    #+#             */
/*   Updated: 2016/08/25 21:10:41 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FILE_H
# define FT_FILE_H
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdio.h>
# include <unistd.h>
# include <errno.h>
# define BUF_SIZE 29
# define RFILE 0
# define RSTDIN 1
# define TRUE 1
# define FALSE 0

extern const char *const	g_sys_errlist[];
extern const int			g_sys_nerr;
void						ft_ex(int ac, char **str, int i);
int							ft_putstr(char *str);
void						ft_putnbr(int x);
void						ft_putchar(char c);
void						ft_puterr(const char *err);
const char					*ft_strerror(int errnum);
#endif
