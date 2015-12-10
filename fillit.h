/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                            :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieto <fnieto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 14:16:24 by fnieto            #+#    #+#             */
/*   Updated: 2015/12/03 23:06:17 by fnieto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <string.h>
# include "libft.h"

typedef	struct		s_dim
{
	size_t	x;
	size_t	y;
	size_t	w;
	size_t	h;
}					t_dim;

typedef	struct		s_model
{
	char	**map;
	t_dim	dim;
}					t_model;

int		main(int argc, char **argv);
void	puterr(int colored);
void	ft_lstpush(t_list **alst, t_list *new);
t_model	*model_cpy(t_model *src);

#endif
