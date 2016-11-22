/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sterror.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/25 14:12:04 by obelange          #+#    #+#             */
/*   Updated: 2016/08/25 21:10:12 by obelange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_file.h"

const char		*ft_strerror(int errnum)
{
	if (errnum < 0)
		errnum = -errnum;
	if (errnum < g_sys_nerr)
		return (g_sys_errlist[errnum]);
	return ("Unknown error");
}
