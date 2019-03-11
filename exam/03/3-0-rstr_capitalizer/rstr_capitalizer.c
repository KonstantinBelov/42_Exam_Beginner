/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 23:27:27 by kbelov            #+#    #+#             */
/*   Updated: 2019/03/04 00:57:58 by kbelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_last_letter_capitalizer(char *s)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 65 && s[i] <= 90)
			s[i] += 32;
		if (s[i] >= 97 && s[i] <= 122 && (s[i + 1] == ' '
					|| s[i + 1] == '\t' || s[i + 1] == '\0'))
			s[i] -= 32;
		write(1, &s[i++], 1);
	}
	write(1, "\n", 1);
}

int			main(int ac, char *av[])
{
	int		i;

	if (ac >= 2)
	{
		i = 1;
		while (av[i])
		{
			ft_last_letter_capitalizer(av[i]);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
