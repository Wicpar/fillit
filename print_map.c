/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfargeas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 23:53:55 by lfargeas          #+#    #+#             */
/*   Updated: 2015/12/12 00:49:56 by lfargeas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdlib.h>

void print_map(t_map *to_print)
{
	t_list *tmp;
	int i;
	char char_actuel;

	i = 0;
	char_actuel = 'A';
	tmp = to_print->elems;
	to_print->map = ((char**)ft_memalloc(sizeof(char*) + 1));
	while (i < to_print->dim->h)
	{
		to_print->map[i] = ft_strnew(to_print->dim->w);
		i++;
	}
	i = 0;
	while (tmp)
	{
		
		
		tmp = tmp->next;
	}
	
	
	exit(0);
}
