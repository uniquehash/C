/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 12:35:58 by obelange          #+#    #+#             */
/*   Updated: 2016/08/23 13:29:38 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_any(char **tab, int (*f)(char *));

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
	char s1[] = "hey";
	
	if (ft_strcmp(s1, str) == 0)
		return (1);
	else 
		return (0);
}

int		main(void)
{
	char *s1 = "hey";
	char *s2 = "hjsf";
	char *s3 = "vnso";
	char *s4[] = {s1, s2, s3, 0};
	int x;
	
	//x = check(s4[0]);
	x = ft_any(s4, &check);
	printf("ft_any return: %d", x);

	return (0);
}


