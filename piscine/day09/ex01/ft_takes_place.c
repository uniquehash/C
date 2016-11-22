/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 19:07:32 by obelange          #+#    #+#             */
/*   Updated: 2016/08/18 21:38:26 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		transform_time(int hour)
{
	if (hour % 100 > 59)
		return (-1);
	else if (hour >= 99)
		return (hour / 100);
	else if (hour >= 0 && hour <= 24)
		return (hour);
	else
		return (-1);
}

int		edge_cases(char *ptrc[], int hour, int *h2)
{
	*h2 = (hour + 1);
	if (hour == 24)
	{
		hour = 0;
		*h2 = hour + 1;
	}
	if (hour >= 0 && hour < 12)
		*ptrc[0] = 'A';
	else
		*ptrc[0] = 'P';
	if (hour != 11 || hour != 23)
		*ptrc[1] = *ptrc[0];
	if (hour == 11)
		*ptrc[1] = 'P';
	if (hour == 23)
	{
		*ptrc[1] = 'A';
		*h2 = 0;
	}
	return (hour);
}

void	ft_takes_place(int hour)
{
	char	*ptrc[2];
	int		*ptrh2;
	char	c1;
	char	c2;
	int		h2;

	hour = transform_time(hour);
	if (hour == -1)
		return ;
	ptrc[0] = &c1;
	ptrc[1] = &c2;
	ptrh2 = &h2;
	hour = edge_cases(ptrc, hour, ptrh2);
	if (hour > 12)
	{
		hour = hour % 12;
		*ptrh2 = hour + 1;
		if (*ptrh2 == 12)
			*ptrh2 = 0;
	}
	else if (hour == 12)
		*ptrh2 = 1;
	printf("THE FOLLOWING TAKES PLACE BETWEEN");
	printf(" %d.00 %c.M. AND %d.00 %c.M.\n", hour, *ptrc[0], h2, *ptrc[1]);
}
