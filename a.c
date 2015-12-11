/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/06 17:27:26 by fnieto            #+#    #+#             */
/*   Updated: 2015/12/11 23:51:58 by lfargeas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void	print(t_list *lst)
{
	t_model *tmp;

	tmp = (t_model*)lst->content;
	ft_putendl("testing");
	ft_putnbr(tmp->dim.x);
	ft_putendl("");
	ft_putnbr(tmp->dim.y);
	ft_putendl("");
	ft_putnbr(tmp->dim.w);
	ft_putendl("");
	ft_putnbr(tmp->dim.h);
	ft_putendl("");
}

int		main(int argc, char **argv)
{
	t_list *buffer;
	t_dim	max;

	if (argc != 2 || argv == 0)
		puterr(1);
	buffer = loadfile(argv[1]);

	ft_putendl("testing sizes");
	
	ft_lstiter(buffer, &print);

	ft_putendl("finished testing");
	max = mindim(buffer);
	ft_putnbr(max.w);
	ft_putchar('\n');
	ft_putnbr(max.h);
	ft_putchar('\n');

}
