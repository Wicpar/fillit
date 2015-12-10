/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modelnew.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 03:15:40 by fnieto            #+#    #+#             */
/*   Updated: 2015/12/10 23:45:52 by fnieto           ###   ########.fr       */
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
		new->dim = dimnew(1000, 1000, 1000, 1000);
	}
	return (new->dim ? new : 0);
}
