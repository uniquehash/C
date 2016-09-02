/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 16:24:53 by obelange          #+#    #+#             */
/*   Updated: 2016/08/13 16:49:16 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int total;

	if (power < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (nb);
	if (nb == -1)
		return (((power % 2) * -2) + 1);
	total = 1;
	while (power > 0)
	{
		total *= nb;
		power--;
	}
	return (total);
}
