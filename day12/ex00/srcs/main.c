/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/25 11:10:40 by obelange          #+#    #+#             */
/*   Updated: 2016/08/25 11:23:08 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_file_display.h"

int		main(int argc, char **argv)
{
	if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else if (argc < 2)
		write(2, "File name missing.\n", 19);
	else
		ft_ex(argv[1]);
	return (0);
}
