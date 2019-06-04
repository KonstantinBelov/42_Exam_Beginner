/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 16:20:10 by kbelov            #+#    #+#             */
/*   Updated: 2019/06/03 19:33:17 by kbelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define NOT_BLANK(c) (c != ' ' && c != '\t')

void	rev_wstr(char *s)
{
	int		i;
	int		end;

	i = 0;
	end = 0;
	while (s[i] != '\0')
		i++;
	while (!end)
	{
		while (NOT_BLANK(s[i]) && i >= 0)
			i--;
		if (i < 0)
			end = 1;
		i++;
		while (NOT_BLANK(s[i]) && s[i] != '\0')
		{
			write(1, &s[i], 1);
			i++;
		}
		i--;
		if (!end)
			write(1, " ", 1);
		while (NOT_BLANK(s[i]) && i >= 0)
			i--;
		while (!NOT_BLANK(s[i]))
			i--;
	}
}	

int		main(int ac, char *av[])
{
	if (ac == 2)
		rev_wstr(av[1]);
	write(1, "\n", 1);
	return (0);
}
