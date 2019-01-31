/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 15:53:23 by kbelov            #+#    #+#             */
/*   Updated: 2019/01/30 15:58:48 by kbelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned char		swap_bits(unsigned char octet)
{
	return (octet >> 4 | octet << 4);
}
/*
int					main(void)
{
	unsigned char	c;

	c = '&';
	printf("%c", swap_bits(c));
}
