/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 19:57:48 by obelange          #+#    #+#             */
/*   Updated: 2016/08/16 21:31:19 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);
void	testStr();
void	FtTestStr();

int		main(void)
{
	 
	testStr();
	printf("\n");
	FtTestStr();

	return (0);
}

void	testStr()
{
	char *rec;
	printf("std version\n\n");

	
	char *big = "abcdf";
	char *little = "ab";
	printf("   big:  %s\n", big);
	printf("little:  %s\n", little);
	rec = strstr(big, little);
	printf("   big:  %s\n", big);
	printf("little:  %s\n", little);
	printf("   rec:  %s\n\n", rec);
	
	char *big1 = "abcdf";
	char *little1 = "";
	printf("   big1:  %s\n", big1);
	printf("little1:  %s\n", little1);
	rec = strstr(big1, little1);
	printf("   big1:  %s\n", big1);
	printf("little1:  %s\n", little1);
	printf("    rec:  %s\n\n", rec);

	char *big2 = "abcdf";
	char *little2 = "xx";
	printf("   big2:  %s\n", big2);
	printf("little2:  %s\n", little2);
	rec = strstr(big2, little2);
	printf("   big2:  %s\n", big2);
	printf("little2:  %s\n", little2);
	printf("    rec:  %s\n\n", rec);

	char *big3 = "ab";
	char *little3 = "ixxxxx";
	printf("   big3:  %s\n", big3);
	printf("little3:  %s\n", little3);
	rec = strstr(big3, little3);
	printf("   big3:  %s\n", big3);
	printf("little3:  %s\n", little3);
	printf("    rec:  %s\n\n", rec);

	char *big4 = "ab";
	char *little4 = "abxx";
	printf("   big4:  %s\n", big4);
	printf("little4:  %s\n", little4);
	rec = strstr(big4, little4);
	printf("   big4:  %s\n", big4);
	printf("little4:  %s\n", little4);
	printf("    rec:  %s\n\n", rec);


}



void	FtTestStr()
{
	char *rec;
	printf("ft version\n\n");

	
	char *big = "abcdf";
	char *little = "ab";
	printf("   big:  %s\n", big);
	printf("little:  %s\n", little);
	rec = ft_strstr(big, little);
	printf("   big:  %s\n", big);
	printf("little:  %s\n", little);
	printf("   rec:  %s\n\n", rec);
	
	char *big7 = "abcdf";
	char *little7 = "bc";
	printf("   big7:  %s\n", big7);
	printf("little7:  %s\n", little7);
	rec = ft_strstr(big7, little7);
	printf("   big7:  %s\n", big7);
	printf("little7:  %s\n", little7);
	printf("   rec:  %s\n\n", rec);

	char *big1 = "abcdf";
	char *little1 = "";
	printf("   big1:  %s\n", big1);
	printf("little1:  %s\n", little1);
	rec = ft_strstr(big1, little1);
	printf("   big1:  %s\n", big1);
	printf("little1:  %s\n", little1);
	printf("    rec:  %s\n\n", rec);

	char *big2 = "abcdf";
	char *little2 = "xx";
	printf("   big2:  %s\n", big2);
	printf("little2:  %s\n", little2);
	rec = ft_strstr(big2, little2);
	printf("   big2:  %s\n", big2);
	printf("little2:  %s\n", little2);
	printf("    rec:  %s\n\n", rec);

	char *big3 = "ab";
	char *little3 = "ixxxxx";
	printf("   big3:  %s\n", big3);
	printf("little3:  %s\n", little3);
	rec = ft_strstr(big3, little3);
	printf("   big3:  %s\n", big3);
	printf("little3:  %s\n", little3);
	printf("    rec:  %s\n\n", rec);

	char *big4 = "ab";
	char *little4 = "abxx";
	printf("   big4:  %s\n", big4);
	printf("little4:  %s\n", little4);
	rec = ft_strstr(big4, little4);
	printf("   big4:  %s\n", big4);
	printf("little4:  %s\n", little4);
	printf("    rec:  %s\n\n", rec);

}


