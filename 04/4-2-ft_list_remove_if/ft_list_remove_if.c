/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/11 12:38:45 by kbelov            #+#    #+#             */
/*   Updated: 2019/04/13 23:03:02 by kbelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*current_list;
	t_list	*next_list
	
	if (!begun_list || !data_ref)
		exit ;
	current_list = begin_list;
	next_list = begin_list->next;
	while (current_list->next)
	{
		if (!cmp(current_list->data, data_ref))
		{
			
		}
		else
			current_list = current_list->next;
	}
}
