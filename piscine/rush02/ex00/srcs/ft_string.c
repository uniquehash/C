/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/27 20:45:28 by zhu               #+#    #+#             */
/*   Updated: 2016/08/28 23:23:27 by zhu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <header.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strcat1(t_list *node, int size, int i)
{
	int		j;
	char	*str;

	j = 0;
	str = (char*)malloc(sizeof(char) * size + 1);
	if (node)
	{
		while (node->next)
		{
			while (++i < (ft_strlen(node->str)))
			{
				str[j] = node->str[i];
				j++;
			}
			node = node->next;
			i = -1;
		}
		while (++i < (ft_strlen(node->str)))
		{
			str[j] = node->str[i];
			j++;
		}
	}
	str[size] = '\0';
	return (str);
}
