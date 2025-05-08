/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utilities.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 23:47:45 by myli-pen          #+#    #+#             */
/*   Updated: 2025/05/09 00:49:12 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * Counts the number of digits in `n`.
 *
 * @param n Integer number.
 * @return Number of digits in an integer.
 */
int	ft_count_digits_base(uintptr_t n, const size_t len)
{
	unsigned int	count;

	if (!n)
		return (1);
	count = 0;
	while (n)
	{
		++count;
		n /= len;
	}
	return (count);
}

char	*ft_uitoa_base(uintptr_t n, const char *base)
{
	char	*str;
	int		digits;
	size_t	len;

	len = ft_strlen(base);
	digits = ft_count_digits_base(n, len);
	str = ft_calloc(digits + 1, sizeof (char));
	if (!str)
		return (NULL);
	while (digits--)
	{
		str[digits] = base[n % len];
		n /= len;
	}
	return (str);
}

char	*ft_ptrstr(char *s)
{
	char	*str;

	str = ft_strjoin("0x", s);
	free (s);
	return (str);
}
