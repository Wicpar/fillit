# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makeH.sh                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fnieto <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/03 23:40:14 by fnieto            #+#    #+#              #
#    Updated: 2015/12/11 19:01:50 by fnieto           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

file="fillit.h"

echo "/* ************************************************************************** */
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
# include \"libft.h\"

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
" > $file

cat *.c | grep "^[a-z]" | grep -v static | sed -e 's/$/;/' >> $file

echo "
#endif" >> $file
