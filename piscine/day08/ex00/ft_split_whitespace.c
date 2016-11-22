/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespace.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 23:05:40 by obelange          #+#    #+#             */
/*   Updated: 2016/08/20 23:45:35 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

#define WHITESPACE(c) (c ==' '||c=='\t'||c=='\r'||c =='\n'||c=='\f'||c=='\v')

int		word_size(char *str)
{
	int length;

	length = 0;
	while (!WHITESPACE(*str) && *str != '\0')
	{
		length++;
		str++;
	}
	if (length >= 1)
		length += 1;
	printf("length: %d\n", length);
	return (length);
}

void	ft_strcpy_til_w(char *dest, char *src)
{
	while (!WHITESPACE(*src) && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
}

char	*copy_word(char *str)
{
	char *word;

	word = (char *)malloc(sizeof(char) * word_size(str));
	ft_strcpy_til_w(word, str);
	return (word);
}

int		get_word_count(char *str)
{
	int count;

	count = 0;
	while (*str != '\0')
	{
		while (WHITESPACE(*str))
			str++;
		if (!WHITESPACE(*str) && *str != '\0')
			count++;
		while (!WHITESPACE(*str) && *str != '\0')
			str++;
	}
	return (count);
}

char	**ft_split_whitespaces(char *str)
{
	int		index;
	char	**word_list;
	int		word_count;

	printf("string and stuff %s\n", str);
	word_count = get_word_count(str);
	index = 0;
	word_list = (char **)malloc(sizeof(char*) * (word_count + 1));
	while (*str != '\0')
	{
		while (WHITESPACE(*str))
			str++;
		if (word_size(str) > 0)
		{
			*word_list = copy_word(str);
			word_list++;
			str += word_size(str);
			printf("wordlist: %s\n", *word_list);
		}
	}
	word_list[word_count] = 0;
	word_list -= word_count;
	int i = 0;
	while (word_list[i])
	{
		printf("wordlist: %s\n", word_list[i]);
		i++;
	}
	return (word_list);
}
