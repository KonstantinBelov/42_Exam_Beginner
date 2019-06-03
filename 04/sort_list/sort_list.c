/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 00:42:47 by kbelov            #+#    #+#             */
/*   Updated: 2019/05/14 01:23:47 by kbelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include <stdlib.h>

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list	*list;
	int		tmp;
	
	list = lst;
	if (!list)
		return (NULL);
	while (list->next)
	{
		if (!(*cmp)(list->data, list->next->data))
		{
			tmp = list->data;
			list->data = list->next->data;
			list->next->data = tmp;
			list = lst;
		}
		else
			list = list->next;
	}
	return (lst);
}
