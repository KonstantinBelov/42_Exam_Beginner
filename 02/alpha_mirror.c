/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 17:05:17 by kbelov            #+#    #+#             */
/*   Updated: 2019/01/30 17:46:10 by kbelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_alpha_mirror(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = 219 - str[i];
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = 155 - str[i];
		write(1, &str[i], 1);
		i++;
	}
}

int		main(int ac, char *av[])
{
	if (ac == 2)
		ft_alpha_mirror(av[1]);
	write(1, "\n", 1);
}
