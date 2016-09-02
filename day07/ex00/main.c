/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 23:14:00 by obelange          #+#    #+#             */
/*   Updated: 2016/08/18 13:47:57 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
char	*ft_strdup(char *src);


int		main(void)
{
	char *str = "cork";
	char *s1 = "d";

	printf("str: %s\n", str);
	printf(" s1: %s\n", s1);	

	s1 = ft_strdup(str);

	free(s1);
	printf("str: %s\n", str);
	printf(" s1: %s\n", s1);	
	
	return (0);
}
