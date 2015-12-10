/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loader.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 20:37:02 by fnieto            #+#    #+#             */
/*   Updated: 2015/12/10 04:15:52 by fnieto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <fcntl.h>
#include <unistd.h>

t_list	*loadfile(char	*str)
{
	int		fd;
	t_list	*lst;
	char	*buf;
	t_model	*tmp;
	int		last;

	fd = open(str, O_RDONLY);
	lst = 0;
	buf = ft_strnew(21);
	if (fd < 0)
		puterr(1);

	ft_putstr("done loading\n");

	while((last = read(fd, buf, 21)) >= 20)
	{
		ft_putendl("starting");

		tmp = modelnew(ft_strsplit(buf, '\n'));

		ft_putendl("done malloc");

		tmp = check_model(tmp);

		ft_putendl("checked model");

		ft_lstpush(&lst, ft_lstnew(tmp, 1));

		ft_putendl("added model");
		ft_putendl(buf);
		if (last != 20)
			ft_strclr(buf);
	}
	ft_putnbr(last);

	if (ft_strlen(buf) != 20 || close(fd) || last || !lst)
		puterr(1);
	ft_memdel((void**)&buf);
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
