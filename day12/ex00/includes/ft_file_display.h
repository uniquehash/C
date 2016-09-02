/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_display.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/25 11:11:58 by obelange          #+#    #+#             */
/*   Updated: 2016/08/25 21:19:30 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FILE_DISPLAY_H
# define FT_FILE_DISPLAY_H
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# define BUF_SIZE 10

void	ft_putchar(char c);
void	ft_ex(char *str);
void	ft_putstr(char *str);
void	ft_putnbr(int x);
#endif
