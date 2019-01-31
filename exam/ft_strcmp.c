/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 22:43:20 by kbelov            #+#    #+#             */
/*   Updated: 2019/01/30 23:12:41 by kbelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int			ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
int			main(int ac, char *av[])
{
	if (ac == 3)
	{
		printf("%d\n", ft_strcmp(av[1], av[2]));
		printf("%d\n", strcmp(av[1], av[2]));
	}
	return (0);
}
