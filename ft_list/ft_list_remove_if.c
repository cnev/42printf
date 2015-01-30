/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjung <vjung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/09 19:53:03 by vjung             #+#    #+#             */
/*   Updated: 2014/09/09 19:53:03 by vjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

static void		check_first(t_list **begin_list, void *data_ref, int(*cmp)())
{
	t_list			*tmp;

	tmp = (*begin_list)->next;
	if ((*cmp)((*begin_list)->data, data_ref) == 0)
	{
		free(*begin_list);
		*begin_list = tmp;
	}
}

void			ft_list_remove_if(t_list **begin_list, void *data_ref, int
	(*cmp)())
{
	t_list			*tmp1;
	t_list			*tmp2;

	if (*begin_list)
	{
		tmp1 = *begin_list;
		tmp2 = tmp1->next;
		while (tmp2)
		{
			if ((*cmp)(tmp2->data, data_ref) == 0)
			{
				tmp1->next = tmp2->next;
				free(tmp2);
			}
			tmp1 = tmp1->next;
			tmp2 = tmp1->next;
		}
		check_first(begin_list, data_ref, cmp);
	}
}
