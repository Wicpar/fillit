/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   model_cpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfargeas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 22:08:37 by lfargeas          #+#    #+#             */
/*   Updated: 2015/12/09 23:23:58 by lfargeas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_model	*model_cpy(t_model *src)
{
	t_model *rv;
	unsigned int i;
	unsigned int i2;

	i = 0;
	i2 = 0;
	rv = (t_model*) ft_memalloc(sizeof(t_model));
	rv->dim = src->dim;
	rv->map = (char**) ft_memalloc(sizeof(char*) * rv->dim.h + 1);
	while (i < rv->dim.h)
	{
		rv->map[i] = ft_strnew(rv->dim.w);
		i2 = 0;
		while (i2 < rv->dim.w)
		{
			rv->map[i][i2] = src->map[i][i2];
			i2++;
		}
		i++;
	}
	return (rv);
}
