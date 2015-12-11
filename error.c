/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnieto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/09 20:08:49 by fnieto            #+#    #+#             */
/*   Updated: 2015/12/09 20:23:48 by fnieto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdlib.h>

void	puterr(int colored)
{
	if (colored)
		ft_putstr_fd("\033[31m", 0);
	ft_putstr("error\n");
	if (colored)
		ft_putstr_fd("\033[0m", 0);
	exit(1);
}
