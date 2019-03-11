/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbelov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 19:40:17 by kbelov            #+#    #+#             */
/*   Updated: 2019/03/05 00:21:07 by kbelov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			is_valid(char c, int base)
{
	char	*digits;
	char	*digits2;

	digits = "0123456789abcdef";
	digits2 = "0123456789ABCDEF";
	while (base--)
	{
		if (digits[base] == c || digits2[base] == c)
			return (1);
	}
	return (0);
}

int			value_of(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	else if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	else if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	return (0);
}

int			ft_atoi_base(const char *str, int str_base)
{
	int		sign;
	int		res;

	sign = 1;
	res = 0;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (*str != '\0')
	{
		if (!is_valid(*str, str_base))
			return (0);
		res = res * str_base + value_of(*str++);
	}
	return (res * sign);
}
