/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjung <vjung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/09 16:21:47 by vjung             #+#    #+#             */
/*   Updated: 2014/09/09 16:21:47 by vjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int				ft_list_size(t_list *begin_list)
{
	t_list			*tmp;
	int				ret;

	ret = 0;
	tmp = begin_list;
	while (tmp)
	{
		ret++;
		tmp = tmp->next;
	}
	return (ret);
}
