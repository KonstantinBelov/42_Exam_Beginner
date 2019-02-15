/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 00:54:32 by kbelov            #+#    #+#             */
/*   Updated: 2019/01/31 01:15:49 by kbelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int			is_power_of_2(unsigned int n)
{
	while (n > 2)
		n /= 2;
	if (n == 2)
		return (1);
	return (0);
}
/*
int			main(void)
{
	unsigned int	n;

	n = 128;
	printf("%d\n", is_power_of_2(n));
	return (0);
}
