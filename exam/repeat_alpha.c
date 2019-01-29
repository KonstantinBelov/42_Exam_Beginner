/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 23:18:50 by kbelov            #+#    #+#             */
/*   Updated: 2019/01/28 23:46:11 by kbelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char *argv[])
{
	int		i;
	int		rep;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			rep = 1;
			if (argv[1][i] >= 65 && argv[1][i] <= 90)
				rep = argv[1][i] - 64;
			else if (argv[1][i] >= 97 && argv[1][i] <= 122)
				rep = argv[1][i] - 96;
			while (rep > 0)
			{
				write(1, &argv[1][i], 1);
				rep--;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
