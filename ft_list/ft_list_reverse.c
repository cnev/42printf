/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjung <vjung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/09 17:37:19 by vjung             #+#    #+#             */
/*   Updated: 2014/09/09 17:37:20 by vjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stddef.h>

static t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
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

static int		ft_list_size(t_list *begin_list)
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

static void		ft_swap(t_list **elem1, t_list **elem2)
{
	void			*tmp_data;

	tmp_data = (*elem1)->data;
	(*elem1)->data = (*elem2)->data;
	(*elem2)->data = tmp_data;
}

void			ft_list_reverse(t_list **begin_list)
{
	t_list			*tmp1;
	t_list			*tmp2;
	unsigned int	list_size;
	unsigned int	i;
	unsigned int	j;

	list_size = ft_list_size(*begin_list);
	i = 0;
	j = list_size - 1;
	while (i != j && i != list_size / 2)
	{
		tmp1 = ft_list_at(*begin_list, i);
		tmp2 = ft_list_at(*begin_list, j);
		ft_swap(&tmp1, &tmp2);
		i++;
		j--;
	}
}
