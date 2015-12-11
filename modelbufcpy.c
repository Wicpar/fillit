/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modelbufcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 22:15:35 by fnieto            #+#    #+#             */
/*   Updated: 2015/12/10 22:25:03 by fnieto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static t_list	*cpy(t_list *origin)
{
	return (ft_lstnew(origin->content, origin->content_size));
}

t_list	*modelbufcpy(t_list *origin)
{
	return (ft_lstmap(origin, &cpy));
}
