/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 19:05:04 by kbelov            #+#    #+#             */
/*   Updated: 2019/03/02 22:45:49 by kbelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_isblanc(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_epur_str(char *s)
{
	while (ft_isblanc(*s) == 1 && *s != '\0')
		s++;
	while (*s != '\0')
	{
		if (ft_isblanc(*s) == 0 ||
				((ft_isblanc(*(s + 1)) == 0) && *(s + 1) != '\0'))
			ft_putchar(*s);
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
