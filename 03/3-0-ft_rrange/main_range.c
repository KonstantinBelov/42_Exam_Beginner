/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_range.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/05 00:37:35 by kbelov            #+#    #+#             */
/*   Updated: 2019/03/05 00:54:20 by kbelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		main(int ac, char **av)
{
	int		*s;
	int		n;
	int		min;
	int		max;
	int		i;

	min = atoi(av[1]);
	max = atoi(av[2]);
	n = max >= min ? max - min + 1 : min - max + 1;
	if (ac != 3)
		return (0);
	i = 0;
	while (i < n)
		printf("%d", ft_range(min, max)[i++]);
	return (1);
}
