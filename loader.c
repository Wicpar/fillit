/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loader.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 20:37:02 by fnieto            #+#    #+#             */
/*   Updated: 2015/12/11 20:08:17 by fnieto           ###   ########.fr       */
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
	while((last = read(fd, buf, 21)) >= 20)
	{
		tmp = modelnew(ft_strsplit(buf, '\n'));
		tmp = check_model(tmp);
		ft_lstpush(&lst, ft_lstnew(tmp, sizeof(t_model)));
		ft_memdel((void**)&tmp);
		if (last != 20)
			ft_strclr(buf);
	}
	if (ft_strlen(buf) != 20 || close(fd) || last || !lst)
		puterr(1);
	ft_memdel((void**)&buf);
	return (lst);
}

t_model	*check_model(t_model *model)
{
	size_t	x;
	size_t	y;
	t_dim	pcs;

	y = 0;
	pcs = dimnew(0, 0, 0, 0);
	while (model->map[y])
	{
		x = 0;
		while (model->map[y][x])
			check_pcs(&pcs, model, x++, y);
		if (x != 4)
			puterr(1);
		y++;
	}
	if (y != 4 || pcs.x != 4 || pcs.y == 4)
		puterr(1);
	model->dim.w = model->dim.w - model->dim.x;
	model->dim.h = model->dim.h - model->dim.y;
	model_trim(model);
	return (model);
}

void	check_pcs(t_dim *pcs, t_model *model, size_t x, size_t y)
{
	size_t	tmp;

	if (model->map[y][x] == '#')
	{
		pcs->x++;
		tmp = (y > 0 && model->map[y - 1][x] == '#')
			+ (x < 3 && model->map[y][x + 1] == '#')
			+ (y < 3 && model->map[y + 1][x] == '#')
			+ (x > 0 && model->map[y][x - 1] == '#');
		if (tmp == 4 || tmp == 0)
			puterr(1);
		else if (tmp == 1)
			pcs->y++;
		else if (tmp == 2)
			pcs->w++;
		else if (tmp == 3)
			pcs->h++;
		aabb_update(&model->dim, x, y);
	}
}

void	aabb_update(t_dim *aabb, size_t x, size_t y)
{
	if (aabb->x == (size_t)1000)
	{
		aabb->x = x;
		aabb->y = y;
		aabb->w = x + 1;
		aabb->h = y + 1;
	}
	else
	{
		aabb->x = aabb->x > x ? x : aabb->x;
		aabb->y = aabb->y > y ? y : aabb->y;
		aabb->w = aabb->w <= x ? x + 1 : aabb->w;
		aabb->h = aabb->h <= y ? y + 1 : aabb->h;
	}
}

void	model_trim(t_model *model)
{
	size_t tmp;

	tmp = 0;
	while (tmp < model->dim.y)
		ft_memdel((void**)&model->map[tmp++]);
	ft_memmove(&model->map[0], &model->map[model->dim.y], sizeof(char*)
			* (5 - model->dim.y));
	model->dim.y = 0;
	tmp = -1;
	while ((model->map)[++tmp])
		ft_memmove(&model->map[tmp][0], &model->map[tmp][model->dim.x],
				sizeof(char) * (5 - model->dim.x));
	model->dim.x = 0;
}
