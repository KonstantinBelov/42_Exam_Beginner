/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 10:24:43 by exam              #+#    #+#             */
/*   Updated: 2019/05/28 10:38:48 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <string.h>

void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list *list;
	
	list = begin_list;
	while (list)
	{
		(*f)(list->data);
		list = list->next;
	}
}
