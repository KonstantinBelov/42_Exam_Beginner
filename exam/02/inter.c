/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 23:54:30 by kbelov            #+#    #+#             */
/*   Updated: 2019/01/30 01:32:43 by kbelov           ###   ########.fr       */
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

void		ft_inter(char *str1, char *str2)
{
	int		i;
	int		j;

	i = 0;
	while (str1[i])
	{
		if (ft_is_unique(str1, str1[i], i) == 1)
		{
			j = 0;
			while (str2[j])
			{
				if (str1[i] == str2[j])
				{
					write(1, &str1[i], 1);
					break ;
				}
				j++;
			}
		}
		i++;
	}
}

int			main(int ac, char *av[])
{
	if (ac == 3)
		ft_inter(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}
