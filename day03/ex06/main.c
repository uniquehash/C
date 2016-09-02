/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 16:45:05 by obelange          #+#    #+#             */
/*   Updated: 2016/08/12 16:45:15 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		ft_putnbr(int nbr);

int		ft_strlen(char *str);

int		main(void)
{
	char	*str;
	int		x;

	str = "four";
	x = ft_strlen(str);
	ft_putnbr(x);
	return (0);
}
