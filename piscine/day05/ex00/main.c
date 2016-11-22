/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 11:08:15 by obelange          #+#    #+#             */
/*   Updated: 2016/08/15 11:18:48 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		puts(const char *str);
void	ft_putstr(char *str);

int		main(void)
{
	char *str;

	str = "hello";
	ft_putstr(str);
	puts(str);
	return (0);
}
