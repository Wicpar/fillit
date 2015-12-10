/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cpy_lstmodel.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfargeas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 02:07:49 by lfargeas          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2015/12/10 03:19:29 by lfargeas         ###   ########.fr       */
=======
/*   Updated: 2015/12/10 02:41:16 by fnieto           ###   ########.fr       */
>>>>>>> origin/master
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

<<<<<<< HEAD
t_list *cpy_lstmodel(t_list *src)
{
	t_list *tmp;
	t_list *ret_val;
	t_list *value;

	tmp = src;
	value = ft_lstnew(model_cpy((t_model*)tmp->content), tmp->content_size);
	ret_val = value;
	value = value->next;
	while (tmp->next) 
	{
		tmp = tmp->next;
		value = ft_lstnew(model_cpy((t_model*)tmp->content), tmp->content_size);
		value = value->next;
	}
	return (ret_val);
}	
=======
>>>>>>> origin/master
