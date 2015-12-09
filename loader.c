/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loader.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 20:37:02 by fnieto            #+#    #+#             */
/*   Updated: 2015/12/10 00:06:13 by fnieto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include  <fcntl.h>

t_list	*loadfile(char	*str)
{
	int		fd;
	t_list	*lst;
	char	*buf;
	t_model	*tmp;

	fd = open(str, O_RDONLY, S_IREAD);
	lst = 0;
	buf = ft_strnew(21);
	if (fd < 0)
		puterr(1);
	while(read(fd, buf, 21) == 21)
	{
		tmp = (t_model*)ft_memalloc(sizeof(t_model));
		tmp->map = ft_strsplit(buf, '\n');
		tmp = check_model(tmp);
	}
	return (lst);
}

t_model	*check_model(t_model *model)
{
	size_t	x;
	size_t	y;
	size_t	pcs;

	y = 0;
	pcs = 0;
	while (model->map[y])
	{
		x = 0;
		while (model->map[y][x])
		{
			pcs += (model->map[y][x] == '#');
			x++;
		}
		if (x != 4)
			puterr(1);
		y++;
	}
	if (y != 4 || pcs != 4)
		puterr(1);
	model->dim.w = 4;
	model->dim.h = 4;
	return (model);
}
