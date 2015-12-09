/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   model_cpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfargeas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 22:08:37 by lfargeas          #+#    #+#             */
/*   Updated: 2015/12/09 22:48:31 by lfargeas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_model	*model_cpy(t_model *src)
{
	t_dim *rv;
	int i;
	int i2;

	i = 0;
	i2 = 0;
	rv = (t_model*) ft_memalloc(sizeof(t_model));
	rv->dim = src->dim;
	rv->map = (char**) ft_memalloc(sizeof(char*) * rv->dim.h + 1);
	while (i < rv->dim.h)
	{
		rv->map[i] = ft_strnew(rv->dim.w);
		while (i2 < rv->dim.w)
		{
			rv->map[i][i2] = src->map[i][i2];
			i2++;
		}
		i++;
	}
	return (rv);
}
