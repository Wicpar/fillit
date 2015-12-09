/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   model_cpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfargeas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 22:08:37 by lfargeas          #+#    #+#             */
/*   Updated: 2015/12/09 22:35:23 by lfargeas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_model	*model_cpy(t_model *src)
{
	t_dim *rv;
	int i;
	int i2;

	i = 0;
	i2 = 0;
	rv = ft_memalloc(sizeof(t_model));
	rv->dim = src->dim;
	while (i < rv->dim.h)
	{
		rv->map[i] = ft_strnew(rv->dim.w);
		while (i2 < )
		{
			
			
			
			
		}
		i++;
	}
	
	
	return (src);
}
