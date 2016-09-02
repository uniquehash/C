/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 22:12:47 by obelange          #+#    #+#             */
/*   Updated: 2016/08/17 14:03:22 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int x;

	i = 0;
	x = 0;
	if (s1[0] == '\0' || s2[0] == '\0')
		return ((unsigned char)s1[0] - (unsigned char)s2[0]);
	while (s1[i] && s2[i])
	{
		x = (unsigned char)s1[i] - (unsigned char)s2[i];
		if (s1[i + 1] == '\0')
		{
			x = (unsigned char)s1[i + 1] - (unsigned char)s2[i + 1];
		}
		i++;
	}
	return (x);
}
