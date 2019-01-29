/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 14:18:22 by kbelov            #+#    #+#             */
/*   Updated: 2019/01/29 14:41:43 by kbelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rotone(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 'z' || str[i] == 'Z')
			str[i] -= 25;
		else if ((str[i] >= 'a' && str[i] <= 'y') ||
				(str[i] >= 'A' && str[i] <= 'Y'))
			str[i] += 1;
		write(1, &str[i], 1);
		i++;
	}
}

int		main(int ac, char *av[])
{
	if (ac == 2)
		ft_rotone(av[1]);
	write(1, "\n", 1);
	return (0);
}
