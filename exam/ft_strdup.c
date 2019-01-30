/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 19:24:06 by kbelov            #+#    #+#             */
/*   Updated: 2019/01/29 21:04:56 by kbelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
#include <stdlib.h>
//#include <stdio.h>

char		*ft_strdup(char *src)
{
	int		len;
	char	*res;

	len = 0;
	while (src[len])
		len++;
	len++;
	res = (char *)malloc(sizeof(char) * len);
	if (!res)
		return (NULL);
	while (len >= 0)
	{
		res[len] = src[len];
		len--;
	}
	return (res);
}
/*
int			main(int ac, char *av[])
{
	if (ac)
		printf("%s\n", ft_strdup(av[1]));
	printf("%s\n", strdup(av[1]));
	return (0);
}
