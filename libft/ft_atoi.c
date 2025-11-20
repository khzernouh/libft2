/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khzernou <khzernou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 19:16:51 by khzernou          #+#    #+#             */
/*   Updated: 2025/11/20 12:54:52 by khzernou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_overflow(long long res, int sign_val, int next_digit)
{
	if (sign_val == 1)
	{
		if (res > INT_MAX / 10 || (res == INT_MAX / 10 && next_digit > INT_MAX
				% 10))
			return (INT_MAX);
	}
	else
	{
		if (res > (long long)INT_MIN / -10 || (res == (long long)INT_MIN / -10
				&& next_digit > (long long)INT_MIN % -10))
			return (INT_MIN);
	}
	return (0);
}

int	ft_atoi(const char *str)
{
	int			c;
	int			of_val;
	long long	sign;
	long long	result;

	c = 0;
	sign = 1;
	result = 0;
	while (str[c] == ' ' || (str[c] >= 9 && str[c] <= 13))
		c++;
	if (str[c] == '-' || str[c] == '+')
	{
		if (str[c] == '-')
			sign = -1;
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		of_val = ft_check_overflow(result, sign, str[c] - '0');
		if (of_val != 0)
			return (of_val);
		result = result * 10 + (str[c] - '0');
		c++;
	}
	return ((int)sign * result);
}
