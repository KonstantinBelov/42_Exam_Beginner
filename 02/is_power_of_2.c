/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/05 23:00:47 by kbelov            #+#    #+#             */
/*   Updated: 2019/05/05 23:24:57 by kbelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
//#include <stdio.h>

int	    is_power_of_2(unsigned int n)
{
	if (n == 1)
		return (1);
	else if (n == 0 || n % 2 != 0)
		return (0);
	else
		return(is_power_of_2(n / 2));
}
/*
int		main(int ac, char *av[])
{
	ac = 0;
	
	printf("%d\n", is_power_of_2(atoi(av[1])));
	return (0);
}
