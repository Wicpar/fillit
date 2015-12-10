/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dimnew.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 23:32:14 by fnieto            #+#    #+#             */
/*   Updated: 2015/12/10 23:43:32 by fnieto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_dim	*dimnew(size_t x, size_t y, size_t w, size_t h)
{
	t_dim *new;

	new = (t_dim*)ft_memalloc(sizeof(t_dim));
	if (new)
	{
		new->x = x;
		new->y = y;
		new->w = w;
		new->h = h;
	}
	return (new);
}
