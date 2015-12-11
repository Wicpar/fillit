/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_collision.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfargeas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 21:15:15 by lfargeas          #+#    #+#             */
/*   Updated: 2015/12/11 22:52:37 by lfargeas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	check_aabb(t_dim box1, t_dim box2)
{
	if ( box2.x >= box1.x + box1.w 
			|| box2.x + box2.w <= box1.x 
			|| box2.y >= box1.y + box1.h
			|| box2.y + box2.h <= box1.y)
		return (0);
	else
		return (1);
}

int check_tetro_col(t_model* t1, t_model* t2)
{
	t_dim diff;
	unsigned int i;
	unsigned int i2;

	i = 0;
	i2 = 0;
	diff = dimnew(t2->dim.x - t1->dim.x, t2->dim.x - t1->dim.x, 0, 0);
	while (i < t2->dim.w-diff.x)
	{
		while (i2 < t2->dim.h-diff.y)
		{
			if (t2->map[i][i2] == '#')
				if(t1->map[i + diff.y][i2 + diff.x] == '#')
					return (1);
			i2++;
		}
		i++;
	}
	return (0);
	
	
	
}

int	check_collision(t_list *lst1, t_list *lst2, t_dim map)
{
	t_list *tmp;
	t_model *model2;

	model2 = ((t_model*)lst2->content);
	if(model2->dim.x + model2->dim.w > map.w || model2->dim.y + model2->dim.h > map.h)
		return(2);
	tmp = lst1;
	while (tmp->next)
	{
		if( check_aabb( ((t_model*)tmp->content)->dim, ((t_model*)lst2->content)->dim ))
			if (check_tetro_col(((t_model*)tmp->content), ((t_model*)tmp->content)))
				return(1);
		tmp = tmp->next;
	}
	return (0);
}
