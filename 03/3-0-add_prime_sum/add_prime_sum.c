/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 01:19:27 by kbelov            #+#    #+#             */
/*   Updated: 2019/03/02 18:47:21 by kbelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			ft_atoi_pos(const char *str)
{
	int		num;
	int		i;

	num = 0;
	i = 0;
	while (str[i] <= 32 && str[i])
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			return (0);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num *= 10;
		num += str[i] - '0';
		i++;
	}
	return (num);
}

int			ft_is_prime(int n)
{
	int		i;

	i = 2;
	while (i < n)
	{
		if ((n % i) == 0)
			return (0);
		i++;
	}
	return (1);
}

void		ft_putnum(int num)
{
	char	c;

	if (num > 9)
		ft_putnum(num / 10);
	c = num % 10 + '0';
	write(1, &c, 1);
}

void		ft_prime_sum(int num)
{
	int		n;
	int		sum;

	n = 2;
	sum = 0;
	while (n <= num)
	{
		if (ft_is_prime(n) == 1)
			sum += n;
		n++;
	}
	ft_putnum(sum);
}

int			main(int ac, char *av[])
{
	if (ac == 2 && ft_atoi_pos(av[1]) > 0)
		ft_prime_sum(ft_atoi_pos(av[1]));
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}
