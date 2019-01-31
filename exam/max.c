/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 17:47:01 by kbelov            #+#    #+#             */
/*   Updated: 2019/01/30 19:19:38 by kbelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int			max(int *tab, unsigned int len)
{
	unsigned int	i;
	int				max;

	i = 0;
	max = 0;
	while (i < len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}
/*
int			main(void)
{
	int				*tab;
	unsigned int	len;

	len = 4;
	tab = (int *)malloc(sizeof(int) * len);
	if (!tab)
		return (0);
	tab[0] = 82;
	tab[1] = 3578;
	tab[2] = 42;
	tab[3] = 5;
	printf("%d\n", max(tab, len));
	return (0);
}
