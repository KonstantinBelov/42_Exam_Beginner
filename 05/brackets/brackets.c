/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brackets.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 10:41:06 by exam              #+#    #+#             */
/*   Updated: 2019/05/28 11:21:41 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define OPEN_BRC(s) (s == '(' || s == '[' || s == '{')
#define CLOSE_BRC(s) (s == ')' || s == ']' || s == '}')
#define BRC_MATCH(op, cl) ((op == '(' && cl == ')') || (op == '[' && cl == ']') || (op == '{' && cl == '}'))

int		brackets(char *s)
{
	char	brc[4096];
	int		i;

	i = 0;
	while (*s != '\0')
	{
		if (OPEN_BRC(*s))
		{
			brc[i] = *s;
			i++;
		}
		else if (CLOSE_BRC(*s))
		{
			i--;
			if (!BRC_MATCH(brc[i], *s))
				return (0);
		}
		s++;
	}
	if (i == 0)
		return (1);
	else
		return (0);
}

int		main(int ac, char *av[])
{
	int i;
	
	if (ac > 1)
	{
		i = 0;
		while (++i < ac)
		{
			if (brackets(av[i]))
				write (1, "OK\n", 3);
			else
				write (1, "Error\n", 6);
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
