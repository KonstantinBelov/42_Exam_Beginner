/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 01:19:27 by kbelov            #+#    #+#             */
/*   Updated: 2019/01/31 19:06:11 by kbelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			ft_atoi(const char *str)
{
	int		result;
	int		sign;
	int		i;

	result = 0;
	sign = 1;
	i = 0;
	while (str[i] <= 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result * sign);
}

int			ft_is_prime(int num)
{
	int		i;
	
	while (num
}

int			ft_prime_sum(int num)
{
	
}

int			main(int ac, char *av[])
{
	int		num;

	if (ac == 2 && av[1] >= '0' && av[1] <= '9')
	{
		num = ft_atoi(av[1]);
		ft_prime_sum(num);
