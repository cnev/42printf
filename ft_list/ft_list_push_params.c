/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjung <vjung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/09 16:46:28 by vjung             #+#    #+#             */
/*   Updated: 2014/09/09 16:46:28 by vjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stddef.h>

static void		ft_list_push_front(t_list **begin_list, void *data)
{
	t_list			*tmp;

	if (!(*begin_list))
		*begin_list = ft_create_elem(data);
	else
	{
		tmp = *begin_list;
		*begin_list = ft_create_elem(data);
		(*begin_list)->next = tmp;
	}
}

t_list			*ft_list_push_params(int ac, char **av)
{
	int				i;
	t_list			*first;

	i = -1;
	first = NULL;
	while (++i < ac)
	{
		ft_list_push_front(&first, av[i]);
	}
	return (first);
}
