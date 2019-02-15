/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 16:01:31 by kbelov            #+#    #+#             */
/*   Updated: 2019/01/30 16:53:52 by kbelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			ft_is_unique(char *str, char letter, int i)
{
	int		k;

	k = 0;
	while (k < i)
	{
		if (str[k] == letter)
			return (0);
		k++;
	}
	return (1);
}

void		ft_union(char *str1, char *str2)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str1[i])
	{
		if (ft_is_unique(str1, str1[i], i) == 1)
			write(1, &str1[i], 1);
		i++;
	}
	i--;
	while (str2[j])
	{
		if ((ft_is_unique(str2, str2[j], j) == 1) &&
				(ft_is_unique(str1, str2[j], i) == 1))
			write(1, &str2[j], 1);
		j++;
	}
}

int			main(int ac, char *av[])
{
	if (ac == 3)
		ft_union(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}
