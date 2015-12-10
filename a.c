/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/06 17:27:26 by fnieto            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2015/12/10 03:18:43 by lfargeas         ###   ########.fr       */
=======
/*   Updated: 2015/12/10 02:51:07 by fnieto           ###   ########.fr       */
>>>>>>> origin/master
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
<<<<<<< HEAD
	t_model *mdl;
 	mdl = (t_model*)ft_memalloc(sizeof(t_model));
	mdl->dim.h = 4;
	mdl->dim.w = 5;
	mdl->dim.x = 0;
	mdl->dim.y = 0;
	mdl->map = ft_strsplit("test1*test2*test3*test4", '*');
	t_list *cpy_val;
	t_list *test_list;
	test_list = ft_lstnew(model_cpy(mdl), 1);
	cpy_val = test_list;
	test_list = test_list->next;
	test_list = ft_lstnew(model_cpy(mdl), 1);
	test_list = test_list->next;
	test_list = ft_lstnew(model_cpy(mdl), 1);
	test_list = test_list->next;
	test_list = ft_lstnew(model_cpy(mdl), 1);
	cpy_lstmodel(cpy_val);
	
	
  if (argc != 2 || argv == 0)
    puterr(1);
=======
	if (argc != 2 || argv == 0)
		puterr(1);
	loadfile(argv[1]);
>>>>>>> origin/master
}
