/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 16:19:21 by obelange          #+#    #+#             */
/*   Updated: 2016/08/19 16:42:05 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		check_value(char c)
{
	if (c >= 65 && c <= 90)
		return (65);
	else if (c >= 97 && c <=122)
		return (97);
	else 
		return (0);
}

char	*convert_to_decimal(char *str)
{
	char *decimal;
	int i;

	i = 0;
	decimal = "0";
	while (str[i])
	{
		decimal[i] = str[i] - check_value(str[i]);
		i++;
	}
	decimal[i] = '\0';
	return (decimal);
}

char	*ft_rot42(char *str)
{
	int i;
	char *ptr;

	printf("str: %s\n", str);

	i = 0;
	ptr = convert_to_decimal(str);

	return (ptr);
}
