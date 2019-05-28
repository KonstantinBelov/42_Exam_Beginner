/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 20:26:15 by kbelov            #+#    #+#             */
/*   Updated: 2019/04/22 20:57:59 by kbelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	fprime(int n)
{
	int		f;

	if (n == 1)
		printf("1");
	f = 2;
	while (f <= n)
	{
		if (n % f == 0)
		{
			printf("%d", f);
			n /= f;
			break;
		}
		f++;
	}
	while (n > 1)
	{
		printf("*");
		f = 2;
		while (f <= n)
		{
			if (n % f == 0)
			{
				printf("%d", f);
				n /= f;
				break;
			}
			f++;
		}
	}
}

int		main(int ac, char *av[])
{
	if (ac == 2)
		fprime(atoi(av[1]));
	printf("\n");
	return (0);
}
