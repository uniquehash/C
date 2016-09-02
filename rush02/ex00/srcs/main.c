/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/27 20:17:32 by zhu               #+#    #+#             */
/*   Updated: 2016/08/28 23:04:06 by zhu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <header.h>

int		*ft_get_size(char *str)
{
	int	i;
	int	j;
	int	*size;

	i = 0;
	j = 0;
	size = (int*)malloc(sizeof(int) * 2);
	size[0] = 0;
	size[1] = 0;
	if (size == NULL)
		return (NULL);
	while (str[++j] != '\0')
	{
		if (str[j] == '\n')
		{
			if (size[1] == 0)
				size[1] = i + 1;
			size[0] = size[0] + 1;
		}
		if (size[1] == 0)
			i = i + 1;
	}
	return (size);
}

void	ft_norm_comp(int *ret, int *size, char *str)
{
	if ((ret[0] = ft_rush00(str, size[1], size[0])) == 1)
		ft_show(0, size[1], size[0], ret[5]);
	if ((ft_rush00(str, size[1], size[0]) == 1))
		ret[5] = 1;
	if ((ret[1] = ft_rush01(str, size[1], size[0])) == 1)
		ft_show(1, size[1], size[0], ret[5]);
	if (ft_rush01(str, size[1], size[0]) == 1)
		ret[5] = 1;
	if ((ret[2] = ft_rush02(str, size[1], size[0])) == 1)
		ft_show(2, size[1], size[0], ret[5]);
	if (ft_rush02(str, size[1], size[0]) == 1)
		ret[5] = 1;
	if ((ret[3] = ft_rush03(str, size[1], size[0])) == 1)
		ft_show(3, size[1], size[0], ret[5]);
	if (ft_rush03(str, size[1], size[0]) == 1)
		ret[5] = 1;
	if ((ret[4] = ft_rush04(str, size[1], size[0])) == 1)
		ft_show(4, size[1], size[0], ret[5]);
	if (ft_rush04(str, size[1], size[0]) == 1)
		ret[5] = 1;
	if (ret[5] == 0)
		ft_putstr("aucune");
	ft_putstr("\n");
}

void	ft_print_result(char *str)
{
	int		ret[6];
	int		*size;
	int		i;

	i = -1;
	size = ft_get_size(str);
	while (++i < 6)
		ret[i] = 0;
	ft_norm_comp(ret, size, str);
}

int		main(void)
{
	t_list	*list;
	int		len;
	int		read_size;
	char	buf[BUF_SIZE + 1];
	char	*str;

	len = 0;
	list = NULL;
	str = NULL;
	while ((read_size = read(0, buf, BUF_SIZE)) > 0)
	{
		buf[read_size] = '\0';
		len += read_size;
		ft_list_push_back(&list, buf);
	}
	str = ft_strcat1(list, len, -1);
	if (ft_strlen(str) > 0)
		ft_print_result(str);
	else
		ft_putstr("aucune\n");
	return (0);
}
