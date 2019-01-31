/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 11:08:33 by kbelov            #+#    #+#             */
/*   Updated: 2019/01/30 15:46:01 by kbelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
	return (
	((octet & 1) << 7) |
	((octet >> 1 & 1) << 6) |
	((octet >> 2 & 1) << 5) |
	((octet >> 3 & 1) << 4) |
	((octet >> 4 & 1) << 3) |
	((octet >> 5 & 1) << 2) |
	((octet >> 6 & 1) << 1) |
	(octet >> 7 & 1));
}
/*
int				main(void)
{
	unsigned char c;

	c = 'b';

	printf("%c\n", reverse_bits(c));
	return (0);
}
