/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initializer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 22:29:12 by fnieto            #+#    #+#             */
/*   Updated: 2015/12/10 23:42:29 by fnieto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_dim return_dim_zero()
{
	t_dim ret_val;

	ret_val.x = 0;
	ret_val.y = 0;
	ret_val.h = 0;
	ret_val.w = 0;
	return (ret_val);
}

t_dim maxdim(t_list *lst)
{
	t_dim	ret_val;
	t_list	*tmp;

	tmp = lst;
	ret_val = return_dim_zero();
	ft_putnbr(ret_val.h);
	while (tmp && tmp->next)
	{
		ret_val.h += ((t_model*)tmp->content)->dim->h;
		ret_val.w += ((t_model*)tmp->content)->dim->w;
		tmp = tmp->next;
		ft_putnbr(((t_model*)tmp->content)->dim->h);
		ft_putendl("");
	}
	return (ret_val);
}
