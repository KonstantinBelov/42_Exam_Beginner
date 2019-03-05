/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 16:00:40 by kbelov            #+#    #+#             */
/*   Updated: 2019/03/04 17:16:00 by kbelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			ft_atoi_pos(char *s)
{
	int		res;

	res = 0;
	while (*s >= '0' && *s <= '9')
		res = res * 10 + *s++ - '0';
	return (res);
}

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putnum(int n)
{
	if (n > 9)
		ft_putnum(n / 10);
	ft_putchar(n % 10 + '0');
}

void		tab_mult(int n)
{
	int		fact;

	fact = 1;
	while (fact <= 9)
	{
		ft_putnum(fact);
		write(1, " x ", 3);
		ft_putnum(n);
		write(1, " = ", 3);
		ft_putnum(fact++ * n);
		write(1, "\n", 1);
	}
}

int			main(int ac, char *av[])
{
	if (ac >= 2)
		tab_mult(ft_atoi_pos(av[1]));
	else
		write(1, "\n", 1);
	return (0);
}
