/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 01:37:10 by kbelov            #+#    #+#             */
/*   Updated: 2019/01/30 02:25:41 by kbelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_last_word(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	i--;
	while (str[i] == ' ' || str[i] == '\t')
		i--;
	while (str[i] && (str[i] != ' ' && str[i] != '\t'))
		i--;
	i++;
	while (str[i] && (str[i] != ' ' && str[i] != '\t'))
	{
		write(1, &str[i], 1);
		i++;
	}
}

int			main(int ac, char *av[])
{
	if (ac == 2)
		ft_last_word(av[1]);
	write(1, "\n", 1);
	return (0);
}
