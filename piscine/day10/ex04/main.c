/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 13:45:57 by obelange          #+#    #+#             */
/*   Updated: 2016/08/23 14:02:44 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_count_if(char **tab, int (*f)(char *));

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int x;

	i = 0;
	x = 0;
	if (s1[i] == '\0' || s2[i] == '\0')
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	while (s1[i] && s2[i])
	{
		x = (unsigned char)s1[i] - (unsigned char)s2[i];
		if (x != 0)
			return (x);
		if (s1[i + 1] == '\0' || s2[i + 1] == '\0')
			x = (unsigned char)s1[i + 1] - (unsigned char)s2[i + 1];
		i++;
	}
	return (x);
}

int		check(char *str)
{
	char *s = "hey";
	if (ft_strcmp(s, str) == 0)
		return (1);
	else 
		return (0);
}

int		main(void)
{
	char *s1 = "hy";
	char *s2 = "ghd";
	char *s3 = "he";
	char *s4[] = {s1, s2, s3,0};
	int x;
	
	x = ft_count_if(s4, &check);
	printf("ft_count_if: %d\n", x);


}





