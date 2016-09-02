/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 13:07:12 by obelange          #+#    #+#             */
/*   Updated: 2016/08/20 23:36:22 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	**ft_split_whitespaces(char *str);

int		main(int argc, char **argv, char **envp)
{
	int i;
	int j;
	char **a;
	i = 0;
	j = 0;
	
	(void)envp;
	if (argc == 2){
		a = ft_split_whitespaces(argv[1]);
		while (argv[i] != 0)
		{
			printf("the argv[%d]: %s\n", i, argv[i]);
			i++;
		}
		i = 0;
		while (a[i] != 0)
		{
			printf("the string[%d]: %s\n", i, a[i]);
			i++;
		}

	}

}




