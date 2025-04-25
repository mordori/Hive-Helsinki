/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 14:49:20 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/25 17:53:37 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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
	if (*nptr == '-')
	{
		sign = -1;
		++nptr;
	}
	while (ft_isdigit(*nptr))
		number = number * 10 + *nptr++ - '0';
	return (sign * number);
}
