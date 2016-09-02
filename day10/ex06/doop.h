/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 19:18:02 by obelange          #+#    #+#             */
/*   Updated: 2016/08/23 22:44:30 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOOP_H
# define DOOP_H

char	*remove_leading_space(char *str, char *dst);
int		is_space(char c);
char	*form_string(char *str, int size);
int		string_to_int(char *str, int size);
int		ft_atoi(char *str);
void	ft_putnbr(int nb);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ut_abs(int x);
#endif
