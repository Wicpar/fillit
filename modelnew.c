/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modelnew.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 03:15:40 by fnieto            #+#    #+#             */
/*   Updated: 2015/12/10 03:21:08 by fnieto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_model	*modelnew(char **map)
{
	t_model *new;

	new = (t_model*)ft_memalloc(sizeof(t_model));
	if (new)
	{
		new->map = map;
		new->dim.x = 0;
		new->dim.y = 0;
		new->dim.w = 0;
		new->dim.h = 0;
	}
	return (new);
}
