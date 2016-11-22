/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 21:39:14 by cramirez          #+#    #+#             */
/*   Updated: 2016/08/28 13:09:32 by slogos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	rush(int x, int y);

int	ft_atoi(char *str);

int	ft_putchar(char c);

int	main(int argc, char **argv)
{
	
	if (argc == 3)
		rush(ft_atoi(argv[1]), ft_atoi(argv[2]));


	return (0);
}
