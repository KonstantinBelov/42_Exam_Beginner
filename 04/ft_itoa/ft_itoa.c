/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 12:36:20 by kbelov            #+#    #+#             */
/*   Updated: 2019/06/03 16:02:44 by kbelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoa(int nbr)
{
	char	*num;
	int		n;
	int		i;
	int		sign;
	
	if (nbr == -2147483648)
		return ("-2147483648");
	if (nbr == 0)
		return ("0");
	sign = 1;
	i = 0;
	if (nbr < 0)
	{
		sign = -1;
		nbr *= -1;
		i++;
	}
	n = nbr;
	while (n)
	{
		n /= 10;
		i++;
	}
	if (!(num = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	num[i] = '\0';
	while (nbr)
	{
		i--;
		num[i] = nbr % 10 + '0';
		nbr /= 10;
	}
	if (sign == -1)
	{
		i--;
		num[i] = '-';
	}
	return (num);
}
/*
#include <stdio.h>

int		main(int ac, char *av[])
{
	ac = 0;
	printf("%s\n", ft_itoa(atoi(av[1])));
	return (0);
}
*/
