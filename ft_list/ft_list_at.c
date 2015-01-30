/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjung <vjung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/09 17:22:31 by vjung             #+#    #+#             */
/*   Updated: 2014/09/09 17:22:31 by vjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stddef.h>

t_list				*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;
	t_list			*tmp;

	i = -1;
	tmp = begin_list;
	while (tmp && ++i < nbr)
	{
		tmp = tmp->next;
	}
	if (i == nbr)
		return (tmp);
	else
		return (NULL);
}
