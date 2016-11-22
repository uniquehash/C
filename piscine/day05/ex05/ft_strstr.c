/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 19:55:53 by obelange          #+#    #+#             */
/*   Updated: 2016/08/16 22:08:57 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_match(char *str, char *match, int i);

char	*ft_strstr(char *str, char *to_find)
{
	char	c;
	int		i;

	i = 0;
	c = '0';
	if (!*to_find)
		return (str);
	while (c != '\0')
	{
		if (str[i] == to_find[0])
		{
			if (check_match(str, to_find, i) == 0)
				c = str[i];
			else
			{
				c = '\0';
				return (&str[i]);
			}
		}
		else
			c = str[i];
		i++;
	}
	return ("\0");
}

int		check_match(char *str, char *match, int i)
{
	int j;

	j = 0;
	while (match[j])
	{
		if (str[i] != match[j])
			return (0);
		i++;
		j++;
	}
	return (1);
}
