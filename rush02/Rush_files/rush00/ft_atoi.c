/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 14:45:56 by obelange          #+#    #+#             */
/*   Updated: 2016/08/28 21:25:40 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "header.h"

int		is_space(char c)
{
	if (c != 32 && c != 9 && c != 10 && c != 11 && c != 12 && c != 13)
	{
		return (1);
	}
	else
		return (0);
}

int		string_to_int(char *str, int size)
{
	int x;
	int j;
	int total;
	int power;

	j = 0;
	x = 0;
	power = 1;
	total = 0;
	while (size > 0)
	{
		size--;
		while (j < 10)
		{
			if (str[size] == ('0' + j))
				x = j;
			j++;
		}
		j = 0;
		total += (x * power);
		power *= 10;
	}
	return (total);
}

char	*form_string(char *str, int size)
{
	char	tmp[size + 1];
	int		i;

	i = 0;
	while (i < size)
	{
		tmp[i] = str[i];
		i++;
	}
	tmp[i] = '\0';
	str = tmp;
	return (str);
}

char	*remove_leading_space(char *str, char *dst)
{
	char	c;
	int		i;
	int		x;

	i = 0;
	x = -1;
	while (str[i])
	{
		c = str[i];
		if (x == -1)
		{
			if (is_space(c) == 1)
			{
				x = i;
			}
		}
		i++;
	}
	dst = &str[x];
	return (dst);
}




int		ft_atoi(char *str)
{
	int		i;
	int		sign;
	char	*dst;
	char	c;

	dst = &c;
	sign = 1;
	str = remove_leading_space(str, dst);
	if (str[0] == '-')
	{
		sign = -1;
		str = &str[1];
	}
	if (str[0] == '+')
		str = &str[1];
	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	if (i == 0)
		return (0);
	str = form_string(str, i);
	i = string_to_int(str, i);
	return (i * sign);
}
