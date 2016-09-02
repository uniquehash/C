/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 14:46:05 by obelange          #+#    #+#             */
/*   Updated: 2016/08/15 22:28:02 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(char *str);
void	testAtoi();
void	testFtAtoi();

int		main(void)
{
	char *str;

	str = "-14d4";
	
	printf("\n");
	testAtoi();
	printf("\n");
	// ft_atoi(str);
	testFtAtoi();
	return (0);
}

void	testAtoi()
{
	char *str;
	int x;
	
	str = "73";
	x = atoi(str);
	printf("atoi(%s) produces: %d\n", str, x);

	str = "-2147483648";
	x = atoi(str);
	printf("atoi(%s) produces: %d\n", str, x);

	str = "2147483647";
	x = atoi(str);
	printf("atoi(%s) produces: %d\n", str, x);

	str = "-2147483649";
	x = atoi(str);
	printf("atoi(%s) produces(min--): %d\n", str, x);

	str = "2147483649";
	x = atoi(str);
	printf("atoi(%s) produces(max++): %d\n", str, x);

	str = "s17";
	x = atoi(str);
	printf("atoi(%s) produces: %d\n", str, x);

	str = "3s8";
	x = atoi(str);
	printf("atoi(%s) produces: %d\n", str, x);

	str = "96s";
	x = atoi(str);
	printf("atoi(%s) produces: %d\n", str, x);

	str = "3 7";
	x = atoi(str);
	printf("atoi(%s) produces: %d\n", str, x);

	str = "      26";
	x = atoi(str);
	printf("atoi(%s) produces: %d\n", str, x);

	str = "  d    26";
	x = atoi(str);
	printf("atoi(%s) produces: %d\n", str, x);

	str = "74 ";
	x = atoi(str);
	printf("atoi(%s) produces: %d\n", str, x);

	str = "6\n4";
	x = atoi(str);
	printf("atoi(%s) produces: %d\n", "6\\n4", x);

	str = "56\n";
	x = atoi(str);
	printf("atoi(%s) produces: %d\n", "56\\n", x);
	
	str = "\n84";
	x = atoi(str);
	printf("atoi(%s) produces: %d\n", "\\n84", x);

	str = "-3 7";
	x = atoi(str);
	printf("atoi(%s) produces: %d\n", str, x);

	str = "- 26";
	x = atoi(str);
	printf("atoi(%s) produces: %d\n", str, x);

	str = "-74 ";
	x = atoi(str);
	printf("atoi(%s) produces: %d\n", str, x);

	str = "\0-74 ";
	x = atoi(str);
	printf("atoi(%s) produces: %d\n", str, x);

	str = "";
	x = atoi(str);
	printf("atoi(%s) produces: %d\n", str, x);

	str = "33573785385385757";
	x = atoi(str);
	printf("atoi(%s) produces: %d\n", str, x);
}

void	testFtAtoi()
{
	char *str;
	int x;
	
	str = "73";
	x = ft_atoi(str);
	printf("ft_atoi(%s) produces: %d\n", str, x);

	str = "-2147483648";
	x = ft_atoi(str);
	printf("ft_atoi(%s) produces: %d\n", str, x);

	str = "2147483647";
	x = ft_atoi(str);
	printf("ft_atoi(%s) produces: %d\n", str, x);

	str = "-2147483649";
	x = ft_atoi(str);
	printf("ft_atoi(%s) produces(min--): %d\n", str, x);

	str = "2147483649";
	x = ft_atoi(str);
	printf("ft_atoi(%s) produces(max++): %d\n", str, x);

	str = "s17";
	x = ft_atoi(str);
	printf("ft_atoi(%s) produces: %d\n", str, x);

	str = "3s8";
	x = ft_atoi(str);
	printf("ft_atoi(%s) produces: %d\n", str, x);

	str = "96s";
	x = ft_atoi(str);
	printf("ft_atoi(%s) produces: %d\n", str, x);

	str = "3 7";
	x = ft_atoi(str);
	printf("ft_atoi(%s) produces: %d\n", str, x);

	str = "      26";
	x = ft_atoi(str);
	printf("ft_atoi(%s) produces: %d\n", str, x);

	str = "  d    26";
	x = ft_atoi(str);
	printf("ft_atoi(%s) produces: %d\n", str, x);

	str = "74 ";
	x = ft_atoi(str);
	printf("ft_atoi(%s) produces: %d\n", str, x);

	str = "6\n4";
	x = ft_atoi(str);
	printf("ft_atoi(%s) produces: %d\n", "6\\n4", x);

	str = "56\n";
	x = ft_atoi(str);
	printf("ft_atoi(%s) produces: %d\n", "56\\n", x);
	
	str = "\n84";
	x = ft_atoi(str);
	printf("ft_atoi(%s) produces: %d\n", "\\n84", x);

	str = "-3 7";
	x = ft_atoi(str);
	printf("ft_atoi(%s) produces: %d\n", str, x);

	str = "- 26";
	x = ft_atoi(str);
	printf("ft_atoi(%s) produces: %d\n", str, x);

	str = "-74 ";
	x = ft_atoi(str);
	printf("ft_atoi(%s) produces: %d\n", str, x);

	str = "\0-74 ";
	x = ft_atoi(str);
	printf("ft_atoi(%s) produces: %d\n", str, x);

	str = "";
	x = ft_atoi(str);
	printf("ft_atoi(%s) produces: %d\n", str, x);
	
	str = "33573785385385757";
	x = ft_atoi(str);
	printf("ft_atoi(%s) produces: %d\n", str, x);
}





