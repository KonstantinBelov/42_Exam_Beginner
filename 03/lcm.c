/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 21:13:13 by kbelov            #+#    #+#             */
/*   Updated: 2019/05/12 21:48:26 by kbelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int    lcm(unsigned int a, unsigned int b)
{
	unsigned int	c;

	if (a == 0 || b == 0)
		return (0);
	c = 1;
	while (c % a != 0 || c % b != 0)
		c++;
	return (c);
}