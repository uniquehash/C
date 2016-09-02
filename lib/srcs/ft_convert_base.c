/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 22:12:15 by obelange          #+#    #+#             */
/*   Updated: 2016/09/01 23:00:02 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft.h"

//int		ft_strlen(char *str)
//{
//	int len;
//
//	len = 0;
//	while (*(str + len) != '\0')
//		len++;
//	return (len);
//}

int		ft_position(char c, char *str)
{
	int a;

	a = 0;
	while (*(str + a) != c && *(str + a) != '\0')
		a++;
	return (a);
}

int		ft_len(int n, int b)
{
	int len;
	len = 1;
	while (n >= b)
	{
		n /= b;
		len++;
	}
	return (len);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		bf_len;
	int		bt_len;
	int		n;
	char	*result;
	int		a;

	bf_len = ft_strlen(base_from);
	bt_len = ft_strlen(base_to);
	n = 0;
	while (*nbr)
	{
		n = n * bf_len + ft_position(*nbr, base_from);
		nbr++;
	}
	a = ft_len(n, bt_len);
	result = (char*)malloc(sizeof(*result) * (a + 1));
	*(result + a) = '\0';
	while (a--)
	{
		*(result + a) = *(base_to + (n % bt_len));
		n /= bt_len;
	}
	return (result);
}
