/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 15:13:45 by obelange          #+#    #+#             */
/*   Updated: 2016/08/16 15:54:05 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);
void	testStrcpy();
void	ftTestStrcpy();

int		main (void)
{
	

	printf("\n");
	testStrcpy();	
	
	printf("\n");
	ftTestStrcpy();

	return (0);

}

void	testStrcpy()
{

	char src[]  = "ddddddd134";
	char dest[] = "aaaaaaa646";
	char *rec;
	
	printf("std version\n");

	printf("the source string  is: %s\n", src);
	printf("the dest string    is: %s\n", dest);
	rec = strcpy(dest, src);
	printf("the source string  is: %s\n", src);
	printf("the dest string    is: %s\n", dest);
	printf("the rec string     is: %s\n", rec);
	printf("\n");

	printf("the source1 string is: %s\n", "break");
	printf("the dest1 string   is: %s\n", "break");
	//rec = strcpy(dest1, src1);
	printf("the source1 string is: %s\n", "break");
	printf("the dest1 string   is: %s\n", "break");
	printf("the rec string     is: %s\n", "break");
	printf("\n");

	char src2[]  = "kkk";
	char dest2[] = "rrrrr";
	printf("the source2 string is: %s\n", src2);
	printf("the dest2 string   is: %s\n", dest2);
	rec = strcpy(dest2, src2);
	printf("the source2 string is: %s\n", src2);
	printf("the dest2 string   is: %s\n", dest2);
	printf("the rec string     is: %s\n", rec);
	printf("\n");

	char src3[]  = "  ddd";
	char dest3[] = "rrrrr";
	printf("the source3 string is: %s\n", src3);
	printf("the dest3 string   is: %s\n", dest3);
	rec = strcpy(dest3, src3);
	printf("the source3 string is: %s\n", src3);
	printf("the dest3 string   is: %s\n", dest3);
	printf("the rec string     is: %s\n", rec);
}


void	ftTestStrcpy()
{

	char src[]  = "ddddddd134";
	char dest[] = "aaaaaaa646";
	char *rec;
	
	printf("ft version\n");

	printf("the source string  is: %s\n", src);
	printf("the dest string    is: %s\n", dest);
	rec = ft_strcpy(dest, src);
	printf("the source string  is: %s\n", src);
	printf("the dest string    is: %s\n", dest);
	printf("the rec string     is: %s\n", rec);
	printf("\n");

	char src1[] =  "kkkkkk";
	char dest1[] = "cccc";
	printf("the source1 string is: %s\n", src1);
	printf("the dest1 string   is: %s\n", dest1);
	rec = ft_strcpy(dest1, src1);
	printf("the source1 string is: %s\n", src1);
	printf("the dest1 string   is: %s\n", dest1);
	printf("the rec string     is: %s\n", rec);
	printf("\n");

	char src2[]  = "kkk";
	char dest2[] = "rrrrr";
	printf("the source2 string is: %s\n", src2);
	printf("the dest2 string   is: %s\n", dest2);
	rec = ft_strcpy(dest2, src2);
	printf("the source2 string is: %s\n", src2);
	printf("the dest2 string   is: %s\n", dest2);
	printf("the rec string     is: %s\n", rec);
	printf("\n");

	char src3[]  = "  ddd";
	char dest3[] = "rrrrr";
	printf("the source3 string is: %s\n", src3);
	printf("the dest3 string   is: %s\n", dest3);
	rec = ft_strcpy(dest3, src3);
	printf("the source3 string is: %s\n", src3);
	printf("the dest3 string   is: %s\n", dest3);
	printf("the rec string     is: %s\n", rec);
}




