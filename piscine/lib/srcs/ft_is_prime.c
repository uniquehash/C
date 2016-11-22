/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 23:16:14 by obelange          #+#    #+#             */
/*   Updated: 2016/09/01 23:18:21 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int x)
{
	int c;

	if (x < 2)
		return (0);
	if (x == 2)
		return (1);
	c = 2;
	while (x % c != 0 && c * c <= x && c <= 46340)
		c++;
	if (x % c == 0)
		return (0);
	return (1);
}
