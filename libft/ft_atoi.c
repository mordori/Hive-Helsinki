/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 14:49:20 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/27 21:52:39 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	return (c == ' ' || (c >= '\t' && c <= '\r'));
}

// Converts the initial portion of the string [*nptr] to an (int) value.
// Guards against overflow.
// In case of NULL [*nptr] returns arbitrary 0.
// TODO: Print error for (null) when allowed.
int	ft_atoi(const char *nptr)
{
	int	sign;
	int	number;

	sign = 1;
	number = 0;
	if (!nptr)
		return (0);
	while (ft_isspace(*nptr))
		++nptr;
	if ((*nptr == '-' || *nptr == '+') && *nptr++ == '-')
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
