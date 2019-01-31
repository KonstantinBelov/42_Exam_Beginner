/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 21:00:17 by kbelov            #+#    #+#             */
/*   Updated: 2019/01/30 21:30:48 by kbelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void		ft_do_op(char *num1, char *op, char *num2)
{
	if (*op == '+')
		printf("%d", atoi(num1) + atoi(num2));
	else if (*op == '-')
		printf("%d", atoi(num1) - atoi(num2));
	else if (*op == '*')
		printf("%d", atoi(num1) * atoi(num2));
	else if (*op == '/')
		printf("%d", atoi(num1) / atoi(num2));
	else if (*op == '%')
		printf("%d", atoi(num1) % atoi(num2));
}

int			main(int ac, char *av[])
{
	if (ac == 4)
		ft_do_op(av[1], av[2], av[3]);
	printf("\n");
	return (0);
}
