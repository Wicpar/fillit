/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trim_tetri.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfargeas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 00:58:51 by lfargeas          #+#    #+#             */
/*   Updated: 2015/12/10 01:21:49 by lfargeas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int is_tetri_valid(t_model *value)
{
  int i;
  int i2;
  int nbv;

  nbv = 0;
  i = 0;
  i2 = 0;
  while (i < value->dim.h)
    {

      
      while(i2 < value->dim.w)
	{
	  if (value->map[i][i2] == '#')
	    ;
	  if (value->map[i][i2] == '#')
	    ;
	  if (value->map[i][i2] == '#')
	    ;
	  if (value->map[i][i2] == '#')
	    ;
	  i2++;
	}

      i++;
    }
  
  




}

void trim_tetri(t_list *elem)
{
	t_model *value;
	int y;
	int x;

	if (!(is_tetri_valid(value)) )
		puterr(1);
	value = (t_model*)elem->content;





}
