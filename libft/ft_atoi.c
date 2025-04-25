/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 14:49:20 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/25 19:52:48 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	return (c == ' ' || (c >= '\t' && c <= '\r'));
}

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	number;

	sign = 1;
	number = 0;
	while (ft_isspace(*nptr))
		++nptr;
	if (*nptr == '-' || *nptr == '+')
		if (*nptr++ == '-')
			sign = -1;
	while (ft_isdigit(*nptr))
	{
		if (number > (INT_MAX - (*nptr - '0')) / 10)
		{
			if (sign == 1)
				return (INT_MAX);
			return (INT_MIN);
		}
		number = number * 10 + (*nptr++ - '0');
	}
	return (sign * number);
}
