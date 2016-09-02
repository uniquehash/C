/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 22:13:22 by obelange          #+#    #+#             */
/*   Updated: 2016/08/16 23:19:09 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h> 

int		ft_strcmp();
void	testCmp();
void	FtTestCmp();

int		main(void)
{

	testCmp();
	FtTestCmp();

	return (0);
}

void	testCmp()
{
	int x;
	printf("std version\n\n");

	char *s1 = "abc";
	char *s2 = "abc";
	x = strcmp(s1, s2);
	printf("%s is %d from %s\n", s1, x, s2);

	char *s3 = "abc";
	char *s4 = "abd";
	x = strcmp(s3, s4);
	printf("%s is %d from %s\n", s3, x, s4);

	char *s5 = "abc";
	char *s6 = "abb";
	x = strcmp(s5, s6);
	printf("%s is %d from %s\n", s5, x, s6);

	char *s7 = "abc";
	char *s8 = "abcadfaa";
	x = strcmp(s7, s8);
	printf("%s is %d from %s\n", s7, x, s8);

	char *s9 = "ab\200aa";
	char *s10 = "abc";
	x = strcmp(s9, s10);
	printf("%s is %d from %s\n", s9, x, s10);

	char *s11 = "";
	char *s12 = "a";
	x = strcmp(s11, s12);
	printf("%s is %d from %s\n", s11, x, s12);

	char *s13 = "a";
	char *s14 = "";
	x = strcmp(s13, s14);
	printf("%s is %d from %s\n", s13, x, s14);

}

void	FtTestCmp()
{
	int x;
	printf("\n\nft version\n\n");

	char *s1 = "abc";
	char *s2 = "abc";
	x = ft_strcmp(s1, s2);
	printf("%s is %d from %s\n", s1, x, s2);

	char *s3 = "abc";
	char *s4 = "abd";
	x = ft_strcmp(s3, s4);
	printf("%s is %d from %s\n", s3, x, s4);

	char *s5 = "abc";
	char *s6 = "abb";
	x = ft_strcmp(s5, s6);
	printf("%s is %d from %s\n", s5, x, s6);


	char *s7 = "abc";
	char *s8 = "abcadfaa";
	x = ft_strcmp(s7, s8);
	printf("%s is %d from %s\n", s7, x, s8);

	char *s9 = "ab\200aa";
	char *s10 = "abc";
	x = ft_strcmp(s9, s10);
	printf("%s is %d from %s\n", s9, x, s10);

	char *s11 = "";
	char *s12 = "a";
	x = ft_strcmp(s11, s12);
	printf("%s is %d from %s\n", s11, x, s12);

	char *s13 = "a";
	char *s14 = "";
	x = ft_strcmp(s13, s14);
	printf("%s is %d from %s\n", s13, x, s14);

}

