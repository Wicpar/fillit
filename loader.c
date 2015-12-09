/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loader.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 20:37:02 by fnieto            #+#    #+#             */
/*   Updated: 2015/12/09 23:04:24 by fnieto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include  <fcntl.h>

t_list	*loadfile(char	*str)
{
	int		fd;
	t_list	*lst;
	char	*buf;
	t_model	*tmp;

	fd = open(str, O_RDONLY, S_IREAD);
	lst = 0;
	buf = ft_strnew(20);
	if (fd < 0)
		puterr(1);
	while(read(fd, buf, 20) == 20)
	{
		tmp = ft_memalloc(sizeof(t_model));
		tmp->map = ft_strsplit(buf, '\n');
		

	}
	return (lst);
}

t_model	*check_model(t_model *model)
{
	char	**tmp;
	char	*tmp2;

	tmp = model->map;
	while (*tmp)
	{
		while (*tmp2)
		{
			
		}
		tmp++;
	}
	return (model);
}
