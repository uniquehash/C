/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 15:47:10 by obelange          #+#    #+#             */
/*   Updated: 2016/09/01 23:47:50 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <unistd.h>
# include <stdio.h>

void			ft_putnbr(int x);
int				ft_strlen(char *str);
int				ft_strcmp(char *s1, char *s2);
int				ft_atoi(char *str);
int				ft_is_prime(int x);
int				ft_sqrt(int x);
char			*ft_strcpy(char *dest, char *str);
char			*ft_convert_base(char *x, char *base_from, char *base_to);
#endif
