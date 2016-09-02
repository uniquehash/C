/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 22:58:21 by obelange          #+#    #+#             */
/*   Updated: 2016/08/18 23:40:18 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src, int i)
{
	int x;

	x = 0;
	while (src[i])
	{
		dest[i] = src[x];
		i++;
		x++;
	}
	dest[i] = '\n';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	char	*c[3];
	int		len;
	int		curr_len;

	j = 0;
	i = 1;
	curr_len = 0;
	while (i < argc)
	{	
		len = ft_strlen(argv[i]) + 1;		
		c[0] = (char*)malloc(sizeof(int) + (curr_len + len));
		ft_strcpy(c[0], c[2], 0);
		ft_strcpy(c[0], argv[i], curr_len);
		c[0][curr_len + 1] = '\0';
		c[2] = c[0];
		curr_len = ft_strlen(c[2]) + 1;		
	}
	return (c[2]);
}
