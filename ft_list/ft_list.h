/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjung <vjung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/09 15:29:42 by vjung             #+#    #+#             */
/*   Updated: 2014/09/09 15:29:43 by vjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H
# include "../include/ft_printf.h"


t_list			*ft_create_elem(t_data *data);
void			list_pushback(t_list **begin_list, t_data *data);
void			ft_list_clear(t_list **begin_list);
#endif
