/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/05 00:23:04 by kbelov            #+#    #+#             */
/*   Updated: 2019/03/05 00:59:47 by kbelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			*ft_range(int start, int end)
{
	int		*arr;
	int		len;
	int		i;

	i = 0;
	len = start - end;
	if (len < 0)
		len = -len;
	arr = (int *)malloc(sizeof(int) * (len + 1));
	if (!arr)
		return (NULL);
	while (i <= len)
	{
		if (start >= end)
			arr[i] = start - i;
		else if (end > start)
			arr[i] = start + i;
		i++;
	}
	return (arr);
}
