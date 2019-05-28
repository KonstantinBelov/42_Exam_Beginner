/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 20:48:41 by kbelov            #+#    #+#             */
/*   Updated: 2019/03/03 22:38:36 by kbelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			ft_atoi_pos(char *n)
{
	int		num;

	num = 0;
	while (*n >= '0' && *n <= '9')
		num = num * 10 + *n++ - '0';
	return (num);
}

void		print_hex(int n)
{
	if (n >= 16)
		print_hex(n / 16);
	n = n % 16;
	if (n < 10)
		n += '0';
	else
		n += 'a' - 10;
	write(1, &n, 1);
}

int			main(int ac, char *av[])
{
	if (ac == 2)
		print_hex(ft_atoi_pos(av[1]));
	write(1, "\n", 1);
	return (0);
}
