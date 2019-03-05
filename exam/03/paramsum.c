/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/05 14:12:58 by kbelov            #+#    #+#             */
/*   Updated: 2019/03/05 15:18:08 by kbelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnum(int n)
{
	if (n > 9)
		ft_putnum(n / 10);
	ft_putchar(n % 10 + '0');
}

int		main(int ac, char *av[])
{
	av = 0;
	ft_putnum(ac - 1);
	write(1, "\n", 1);
	return (0);
}
