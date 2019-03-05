/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 20:18:37 by kbelov            #+#    #+#             */
/*   Updated: 2019/03/03 21:14:54 by kbelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int			pgcd(int a, int b)
{
	int		i;

	i = b;
	if (a < b)
		i = a;
	while (i > 0)
	{
		if (a % i == 0 && b % i == 0)
			return (i);
		i--;
	}
	return (1);
}

int			main(int ac, char *av[])
{
	if (ac == 3)
		printf("%d", pgcd(atoi(av[1]), atoi(av[2])));
	printf("\n");
	return (0);
}
