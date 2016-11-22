/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/28 23:17:29 by zhu               #+#    #+#             */
/*   Updated: 2016/08/28 23:19:35 by zhu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <header.h>

int	ft_rush00(char *str, int col, int row)
{
	char	*rush00;

	rush00 = char_rush00(col, row, 0, 0);
	if (ft_strcmp(rush00, str) == 0)
		return (1);
	else
		return (0);
}

int	ft_rush01(char *str, int col, int row)
{
	char	*rush01;

	rush01 = char_rush01(col, row, 0, 0);
	if (ft_strcmp(rush01, str) == 0)
		return (1);
	else
		return (0);
}

int	ft_rush02(char *str, int col, int row)
{
	char	*rush02;

	rush02 = char_rush02(col, row, 0, 0);
	if (ft_strcmp(rush02, str) == 0)
		return (1);
	else
		return (0);
}

int	ft_rush03(char *str, int col, int row)
{
	char	*rush03;

	rush03 = char_rush03(col, row, 0, 0);
	if (ft_strcmp(rush03, str) == 0)
		return (1);
	else
		return (0);
}

int	ft_rush04(char *str, int col, int row)
{
	char	*rush04;

	rush04 = char_rush04(col, row, 0, 0);
	if (ft_strcmp(rush04, str) == 0)
		return (1);
	else
		return (0);
}
