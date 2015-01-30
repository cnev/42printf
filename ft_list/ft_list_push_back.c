/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjung <vjung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/09 15:43:06 by vjung             #+#    #+#             */
/*   Updated: 2014/09/09 15:43:07 by vjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "../include/ft_printf.h"
#include "../libft/includes/libft.h" /* YO NORM ERASE THOS*/
void			list_pushback(t_list **begin_list, t_data *data)
{
	t_list			*tmp;

	if (!(*begin_list))
	{
		*begin_list = ft_create_elem(data);
	}
	else
	{
		tmp = *begin_list;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = ft_create_elem(data);
	}
}
