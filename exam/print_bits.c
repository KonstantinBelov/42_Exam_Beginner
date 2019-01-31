/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 21:31:16 by kbelov            #+#    #+#             */
/*   Updated: 2019/01/30 22:30:03 by kbelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_print_bits(unsigned char octet)
{
	int		mask;
	int		i;

	mask = 128;
	i = 0;
	while (i < 8)
	{
		if ((octet & mask) == mask)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		mask = mask >> 1;
		i++;
	}
}
/*
int			main(void)
{
	unsigned char c;

	c = 2;
	ft_print_bits(c);
	return (0);
}
