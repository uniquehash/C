/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/20 15:13:00 by obelange          #+#    #+#             */
/*   Updated: 2016/10/20 15:13:01 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ut_find_index(char const *s, char c)
{
	size_t	i;
	int		flag;
	size_t	x;

	i = 0;
	flag = 0;
	x = 0;
	while (*s)
	{
		if (s[i] == c)
		{
			x++;
			flag = 1;
		}
		else if (s[i] != c && flag == 0)
			;
		else if (s[i] != c && flag == 1)
		{
			return (i - 1);
		}
		i++;
	}
	return (i);
}

static	size_t	ut_num_of_words(char const *s, size_t ih, size_t it, char c)
{
	size_t	i;
	size_t	k;
	int		flag;

	flag = 0;
	i = ih;
	if (ih == it)
		return (0);
	k = 1;
	while (i < it)
	{
		if (s[i] == c)
		{
			flag = 1;
		}
		else if (s[i] != c && flag == 0)
			;
		else if (s[i] != c && flag == 1)
		{
			k++;
			flag = 0;
		}
		i++;
	}
	return (k);
}

static	char	**ut_doublechar(size_t size)
{
	char	**dchararr;

	NULL_GUARD(dchararr = (char**)malloc(sizeof(char*) * (size + 1)));
	dchararr[size] = 0;
	return (dchararr);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**strarr;
	size_t	iar[4];

	if (s && c)
	{
		iar[0] = 0;
		iar[1] = ft_stri_head(s, c);
		iar[3] = ut_num_of_words(s, iar[1], ft_stri_tail(s, c), c);
		NULL_GUARD(strarr = ut_doublechar(iar[3]));
		while (iar[0] < iar[3])
		{
			iar[2] = ut_find_index(&s[iar[1]], c);
			if ((strarr[iar[0]++] = ft_strsub(s, iar[1], ftsd(&s[iar[1]], c))))
				iar[1] = iar[2] + iar[1] + 1;
			else
			{
				ft_strdfree((void**)strarr);
				return (NULL);
			}
		}
		return (strarr);
	}
	return (NULL);
}
