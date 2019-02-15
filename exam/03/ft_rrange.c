/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 19:07:13 by kbelov            #+#    #+#             */
/*   Updated: 2019/01/31 19:54:24 by kbelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

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
	while (arr[i] != start)
	{
		if (start > end)
			arr[i] = end + i;
			i++;
		else if (end > start)
			arr[i] = end - i;
			i++;
	}
	arr[i + 1] = start;
	return (*arr);
}

int 		main(void)
{
	printf("%d\n", ft_rrange(10, 5));
	return (0);
}
