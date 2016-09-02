/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 16:02:20 by obelange          #+#    #+#             */
/*   Updated: 2016/08/16 19:40:32 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);
void	testStrncpy();
void	ftTestStrncpy();

int		main(void)
{
	

	testStrncpy();
	ftTestStrncpy();


	return (0);
}

void	testStrncpy()
{
	size_t size;
	char *rec;

	printf("\n");
	printf("\n");
	printf("std version: \n");

	printf("\n");
	size = 6;
	char src[]  = "cdefg";
	char dest[] = "kolda";
    printf("size:  %zu\n", size);
	printf(" src:  %s\n", src);
    printf("dest:  %s\n", dest);
	rec = strncpy(dest, src, size);
    printf(" src:  %s\n", src);
    printf("dest:  %s\n", dest);
    printf(" rec:  %s\n", rec);

	printf("\n");
	size = 5;
	char src1[]  = "bcdefg";
	char dest1[] = "dpwa";
    printf(" size:  %zu\n", size);
    printf(" src1:  %s\n", src1);
    printf("dest1:  %s\n", dest1);
	rec = strncpy(dest1, src1, size);
    printf(" src1:  %s\n", src1);
    printf("dest1:  %s\n", dest1);
    printf("rec1:  %s\n", rec);

	printf("\n");
	size = 4;
	char src2[]  = "wertyui";
	char dest2[] = "nmj";
    printf(" size:  %zu\n", size);
    printf(" src2:  %s\n", src2);
    printf("dest2:  %s\n", dest2);
	rec = strncpy(dest2, src2, size);
    printf(" src2:  %s\n", src2);
    printf("dest2:  %s\n", dest2);
    printf(" rec2:  %s\n", rec);

/*	printf("\n");
	size = 8;
	char src3[]  = "hunkfgr";
	char dest3[] = "esrfyh";
    printf(" size:  %zu\n", size);
    printf(" src3:  %s\n", src3);
    printf("dest3:  %s\n", dest3);
	rec = strncpy(dest3, src3, size);
    printf(" src3:  %s\n", src3);
    printf("dest3:  %s\n", dest3);
    printf(" rec3:  %s\n", rec);
*/
	printf("\n");
	size = 4;
	char src4[]  = "ghy";
	char dest4[] = "bhjknf";
    printf(" size:  %zu\n", size);
    printf(" src4:  %s\n", src4);
    printf("dest4:  %s\n", dest4);
	rec = strncpy(dest4, src4, size);
    printf(" src4:  %s\n", src4);
    printf("dest4:  %s\n", dest4);
    printf(" rec4:  %s\n", rec);

	printf("\n");
	size = 5;
	char src5[]  = "yguhi";
	char dest5[] = "cdsawe";
    printf(" size:  %zu\n", size);
    printf(" src5:  %s\n", src5);
    printf("dest5:  %s\n", dest5);
	rec = strncpy(dest5, src5, size);
    printf(" src5:  %s\n", src5);
    printf("dest5:  %s\n", rec);

	printf("\n");
	size = 5;
	char src6[]  = "njklhg";
	char dest6[] = "vgdtf";
    printf(" size:  %zu\n", size);
    printf(" src6:  %s\n", src6);
    printf("dest6:  %s\n", dest6);
	rec = strncpy(dest6, src6, size);
    printf(" src6:  %s\n", src6);
    printf("dest6:  %s\n", dest6);
    printf(" rec6:  %s\n", rec);

	printf("\n");
	size = 5;
	char src7[]  = "abcdhun";
	char dest7[] = "plkofcg";
    printf(" size:  %zu\n", size);
    printf(" src7:  %s\n", src7);
    printf("dest7:  %s\n", dest7);
	rec = strncpy(dest7, src7, size);
    printf(" src7:  %s\n", src7);
    printf("dest7:  %s\n", dest7);
    printf(" rec7:  %s\n", rec);
	
	printf("\n");
	size = 6;
	char src8[]  = "vgh";
	char dest8[] = "cvsxrty";
    printf(" size:  %zu\n", size);
    printf(" src8:  %s\n", src8);
    printf("dest8:  %s\n", dest8);
	rec = strncpy(dest8, src8, size);
    printf(" src8:  %s\n", src8);
    printf("dest8:  %s\n", dest8);
    printf(" rec8:  %s\n", rec);

/*	printf("\n");
	size = 5;
	char src9[]  = "bjklpo";
	char dest9[] = "cd";
    printf(" size:  %zu\n", size);
    printf(" src9:  %s\n", src9);
    printf("dest9:  %s\n", dest9);
	rec = strncpy(dest9, src9, size);
    printf(" src9:  %s\n", src9);
    printf("dest9:  %s\n", dest9);
    printf(" rec9:  %s\n", rec);
*/

/*	printf("\n");
	size = 7;
	char src10[]  = "un";
	char dest10[] = "ofcg";
    printf("  size:  %zu\n", size);
    printf(" src10:  %s\n", src10);
    printf("dest10:  %s\n", dest10);
	rec = strncpy(dest10, src10, size);
    printf(" src10:  %s\n", src10);
    printf("dest10:  %s\n", dest10);
    printf(" rec10:  %s\n", rec);

	printf("\n");
	size = 7;
	char src11[]  = "gvgh";
	char dest11[] = "cy";
    printf("  size:  %zu\n", size);
    printf(" src11:  %s\n", src11);
    printf("dest11:  %s\n", dest11);
	rec = strncpy(dest11, src11, size);
    printf(" src11:  %s\n", src11);
    printf("dest11:  %s\n", dest11);
    printf(" rec11:  %s\n", rec);

	printf("\n");
	size = 7;
	char src12[]  = "bjo";
	char dest12[] = "cdg";
    printf("  size:  %zu\n", size);
    printf(" src12:  %s\n", src12);
    printf("dest12:  %s\n", dest12);
	rec = strncpy(dest12, src12, size);
    printf(" src12:  %s\n", src12);
    printf("dest12:  %s\n", dest12);
    printf(" rec12:  %s\n", rec);
*/
}



void	ftTestStrncpy()
{
	size_t size;
	char *rec;

	printf("\n");
	printf("\n");
	printf("ft version: \n");

	printf("\n");
	size = 6;
	char src[]  = "cdefg";
	char dest[] = "kolda";
    printf("size:  %zu\n", size);
	printf(" src:  %s\n", src);
    printf("dest:  %s\n", dest);
	rec = ft_strncpy(dest, src, size);
    printf(" src:  %s\n", src);
    printf("dest:  %s\n", dest);
    printf(" rec:  %s\n", rec);

	printf("\n");
	size = 5;
	char src1[]  = "bcdefg";
	char dest1[] = "dpwa";
    printf(" size:  %zu\n", size);
    printf(" src1:  %s\n", src1);
    printf("dest1:  %s\n", dest1);
	rec = ft_strncpy(dest1, src1, size);
    printf(" src1:  %s\n", src1);
    printf("dest1:  %s\n", dest1);
    printf("rec1:  %s\n", rec);

	printf("\n");
	size = 4;
	char src2[]  = "wertyui";
	char dest2[] = "nmj";
    printf(" size:  %zu\n", size);
    printf(" src2:  %s\n", src2);
    printf("dest2:  %s\n", dest2);
	rec = ft_strncpy(dest2, src2, size);
    printf(" src2:  %s\n", src2);
    printf("dest2:  %s\n", dest2);
    printf(" rec2:  %s\n", rec);

	printf("\n");
	size = 8;
	char src3[]  = "hunkfgr";
	char dest3[] = "esrfyh";
    printf(" size:  %zu\n", size);
    printf(" src3:  %s\n", src3);
    printf("dest3:  %s\n", dest3);
	rec = ft_strncpy(dest3, src3, size);
    printf(" src3:  %s\n", src3);
    printf("dest3:  %s\n", dest3);
    printf(" rec3:  %s\n", rec);

	printf("\n");
	size = 4;
	char src4[]  = "ghy";
	char dest4[] = "bhjknf";
    printf(" size:  %zu\n", size);
    printf(" src4:  %s\n", src4);
    printf("dest4:  %s\n", dest4);
	rec = ft_strncpy(dest4, src4, size);
    printf(" src4:  %s\n", src4);
    printf("dest4:  %s\n", dest4);
    printf(" rec4:  %s\n", rec);

	printf("\n");
	size = 5;
	char src5[]  = "yguhi";
	char dest5[] = "cdsawe";
    printf(" size:  %zu\n", size);
    printf(" src5:  %s\n", src5);
    printf("dest5:  %s\n", dest5);
	rec = ft_strncpy(dest5, src5, size);
    printf(" src5:  %s\n", src5);
    printf("dest5:  %s\n", rec);

	printf("\n");
	size = 5;
	char src6[]  = "njklhg";
	char dest6[] = "vgdtf";
    printf(" size:  %zu\n", size);
    printf(" src6:  %s\n", src6);
    printf("dest6:  %s\n", dest6);
	rec = ft_strncpy(dest6, src6, size);
    printf(" src6:  %s\n", src6);
    printf("dest6:  %s\n", dest6);
    printf(" rec6:  %s\n", rec);

	printf("\n");
	size = 5;
	char src7[]  = "abcdhun";
	char dest7[] = "plkofcg";
    printf(" size:  %zu\n", size);
    printf(" src7:  %s\n", src7);
    printf("dest7:  %s\n", dest7);
	rec = ft_strncpy(dest7, src7, size);
    printf(" src7:  %s\n", src7);
    printf("dest7:  %s\n", dest7);
    printf(" rec7:  %s\n", rec);
	
	printf("\n");
	size = 6;
	char src8[]  = "vgh";
	char dest8[] = "cvsxrty";
    printf(" size:  %zu\n", size);
    printf(" src8:  %s\n", src8);
    printf("dest8:  %s\n", dest8);
	rec = ft_strncpy(dest8, src8, size);
    printf(" src8:  %s\n", src8);
    printf("dest8:  %s\n", dest8);
    printf(" rec8:  %s\n", rec);

	printf("\n");
	size = 5;
	char src9[]  = "bjklpo";
	char dest9[] = "cd";
    printf(" size:  %zu\n", size);
    printf(" src9:  %s\n", src9);
    printf("dest9:  %s\n", dest9);
	rec = ft_strncpy(dest9, src9, size);
    printf(" src9:  %s\n", src9);
    printf("dest9:  %s\n", dest9);
    printf(" rec9:  %s\n", rec);


	printf("\n");
	size = 7;
	char src10[]  = "un";
	char dest10[] = "ofcg";
    printf("  size:  %zu\n", size);
    printf(" src10:  %s\n", src10);
    printf("dest10:  %s\n", dest10);
	rec = ft_strncpy(dest10, src10, size);
    printf(" src10:  %s\n", src10);
    printf("dest10:  %s\n", dest10);
    printf(" rec10:  %s\n", rec);

	printf("\n");
	size = 7;
	char src11[]  = "gvgh";
	char dest11[] = "cy";
    printf("  size:  %zu\n", size);
    printf(" src11:  %s\n", src11);
    printf("dest11:  %s\n", dest11);
	rec = ft_strncpy(dest11, src11, size);
    printf(" src11:  %s\n", src11);
    printf("dest11:  %s\n", dest11);
    printf(" rec11:  %s\n", rec);

	printf("\n");
	size = 7;
	char src12[]  = "bjo";
	char dest12[] = "cdg";
    printf("  size:  %zu\n", size);
    printf(" src12:  %s\n", src12);
    printf("dest12:  %s\n", dest12);
	rec = ft_strncpy(dest12, src12, size);
    printf(" src12:  %s\n", src12);
    printf("dest12:  %s\n", dest12);
    printf(" rec12:  %s\n", rec);

}










