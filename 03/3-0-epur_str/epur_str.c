/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/02 23:02:01 by kbelov            #+#    #+#             */
/*   Updated: 2019/06/02 23:26:25 by kbelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define IS_BLANK(c) (c == ' ' || c == '\t')

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_epur_str(char *s)
{
	while (IS_BLANK(*s))
		s++;
	while (*s != '\0')
	{
		if (!IS_BLANK(*s))
			ft_putchar(*s);
		else if (IS_BLANK(*s) && !IS_BLANK(*(s + 1)) && *(s + 1) != '\0')
			ft_putchar(' ');
		s++;
	}
}

int		main(int ac, char *av[])
{
	if (ac == 2)
		ft_epur_str(av[1]);
	write(1, "\n", 1);
	return (0);
}
