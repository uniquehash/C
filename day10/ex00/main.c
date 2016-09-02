/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 14:24:53 by obelange          #+#    #+#             */
/*   Updated: 2016/08/22 14:32:31 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_putchar(char c);
void    ft_swap(int *a, int *b);
void    ft_putstr(char *str);
int     ft_strlen(char *str);
int     ft_strcmp(char *s1, char *s2);

int		main(void)
{
	int x;
	int y;
	int *a = &x;
	int *b = &y;

	
	x = ft_strlen("asdf");
	y = ft_strcmp("aaa", "aaa");

	ft_swap(a, b);

	if (x == 0 && y == 4)
		ft_putstr("afaffa");
	
	ft_putchar('\n');
	return (0);
}


