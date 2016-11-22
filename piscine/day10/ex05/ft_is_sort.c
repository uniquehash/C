/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 14:27:40 by obelange          #+#    #+#             */
/*   Updated: 2016/08/23 20:20:09 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int x;
	int re;

	i = 0;
	x = 0;
	x = f(tab[i], tab[i + 1]);
	i++;
	while (i < length - 1)
	{
		re = f(tab[i], tab[i + 1]);
		if (re < x)
			return (0);
		x = re;
		i++;
	}
	return (1);
}
