/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 18:19:05 by exam              #+#    #+#             */
/*   Updated: 2019/01/26 21:07:58 by kbelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ulstr(char *src)
{
	int		i;

	i = 0;
	while (src[i])
	{
		if (src[i] >= 65 && src[i] <= 90)
			src[i] += 32;
		else if (src[i] >= 97 && src[i] <= 122)
			src[i] -= 32;
		write(1, &src[i], 1);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_ulstr(argv[1]);
	write(1, "\n", 1);
	return (0);
}
