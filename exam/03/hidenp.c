/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 13:56:06 by kbelov            #+#    #+#             */
/*   Updated: 2019/03/03 14:55:55 by kbelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		hidenp(char *s, char *str)
{
	if (*s == '\0')
		write(1, "1", 1);
	while (*str != '\0')
	{
		if (*str++ == *s)
			s++;
	}
	if (*s == '\0')
		write(1, "1", 1);
	else
		write(1, "0", 1);
}

int			main(int ac, char *av[])
{
	if (ac == 3)
		hidenp(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}