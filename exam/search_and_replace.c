/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 23:59:48 by kbelov            #+#    #+#             */
/*   Updated: 2019/01/29 01:22:43 by kbelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		search_and_replace(char *str, char let1, char let2)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] == let1)
			str[i] = let2;
		write(1, &str[i], 1);
		i++;
	}
	return (0);
}

int		main(int argc, char *argv[])
{
	if (argc == 4 && argv[2][1] == '\0' && argv[3][1] == '\0')
		search_and_replace(argv[1], *argv[2], *argv[3]);
	write(1, "\n", 1);
	return (0);
}
