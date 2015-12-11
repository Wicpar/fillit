/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initializer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 22:29:12 by fnieto            #+#    #+#             */
/*   Updated: 2015/12/12 00:49:24 by fnieto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_dim	mindim(t_list *lst)
{
	size_t	i;
	size_t	s;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	s = 0;
	i *= 4;
	while (s * s < i)
		s++;
	return (dimnew(0, 0, s, s));
}

void	make_map(t_list *models)
{
	t_map	map;
	size_t	i;

	map.elems = models;
	map.dim = (t_dim*)ft_memalloc(sizeof(t_dim));
	*map.dim = mindim(models);
	i = 0;
	while (i < map.dim->w * map.dim->h)
	{
		
	}
}
