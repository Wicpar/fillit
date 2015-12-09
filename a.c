/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/06 17:27:26 by fnieto            #+#    #+#             */
/*   Updated: 2015/12/09 23:24:40 by lfargeas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	t_model *rv = (t_model*) ft_memalloc(sizeof(t_model));;
	rv->map = ft_strsplit("test1*test2*test3*test4", '*');
	rv->dim.w = 5;
	rv->dim.h = 4;
	rv->dim.x = 0;
	rv->dim.y = 0;
	t_model *rv2;
	rv2 = model_cpy(rv);
	ft_putstr(rv2->map[4]);
	ft_putchar('\n');
	ft_putstr("endtest\n");
	if (argc != 2 || argv == 0)
		puterr(1);
}
