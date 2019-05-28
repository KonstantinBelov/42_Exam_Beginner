/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 13:12:43 by kbelov            #+#    #+#             */
/*   Updated: 2019/01/29 14:13:26 by kbelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_rev_print(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	i--;
	while (str[i])
	{
		write(1, &str[i], 1);
		i--;
	}
}

int			main(int ac, char *av[])
{
	if (ac == 2)
		ft_rev_print(av[1]);
	write(1, "\n", 1);
	return (0);
}
