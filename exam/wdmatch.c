/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 19:23:08 by kbelov            #+#    #+#             */
/*   Updated: 2019/01/30 20:34:42 by kbelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_wdmatch(char *str1, char *str2)
{
	int		i;
	int		j;
	int		len;

	i = 0;
	j = 0;
	len = 0;
	while (str1[len])
		len++;
	while (str2[j] && i < len)
	{
		if (str2[j] == str1[i])
			i++;
		j++;
	}
	if (i == len)
		write(1, str1, len);
}

int			main(int ac, char *av[])
{
	if (ac == 3)
		ft_wdmatch(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}
