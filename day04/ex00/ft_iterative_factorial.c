/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 15:36:52 by obelange          #+#    #+#             */
/*   Updated: 2016/08/13 16:07:52 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int	total;

	if (nb > 12)
		return (0);
	if (nb < 0)
		return (0);
	total = 1;
	while (nb > 0)
	{
		total = total * nb;
		nb--;
	}
	return (total);
}
