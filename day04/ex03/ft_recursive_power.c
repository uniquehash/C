/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 16:53:43 by obelange          #+#    #+#             */
/*   Updated: 2016/08/13 17:05:21 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (nb);
	if (nb == -1)
		return (((power % 2) * -2) + 1);
	return ((nb * ft_recursive_power(nb, power - 1)));
}
