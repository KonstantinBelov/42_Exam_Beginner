/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 19:07:13 by kbelov            #+#    #+#             */
/*   Updated: 2019/03/03 13:51:20 by kbelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			*ft_rrange(int start, int end)
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
			arr[i] = end + i;
		else if (end > start)
			arr[i] = end - i;
		i++;
	}
	return (arr);
}
