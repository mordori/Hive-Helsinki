/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 02:46:08 by myli-pen          #+#    #+#             */
/*   Updated: 2025/05/12 01:12:40 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * Counts the number of digits in `n`.
 *
 * @param n Integer number.
 * @return Number of digits in an integer.
 */
static int	ft_countdigits(uintptr_t n, const size_t len)
{
	unsigned int	count;

	if (!len)
		return (-1);
	count = 1;
	n /= len;
	while (n)
	{
		++count;
		n /= len;
	}
	return (count);
}

static int	ft_validatebase(const char *base)
{
	int	i;
	int	j;

	if(!base || !*base)
		return (0);
	i = 0;
	while (i < 10 && base[i] == i + '0')
		++i;
	if (i < 2 || (base[i] && i < 10))
		return (0);
	j = 0;
	while (base[i + j])
	{
		if (base[i + j] != j + 'A')
			return (0);
		++j;
	}
	return (1);
}

char	*ft_uitoa(uintptr_t n, const char *base)
{
	char	*str;
	int		digits;
	size_t	len;

	if (!ft_validatebase(base))
		return (NULL);
	len = ft_strlen(base);
	digits = ft_countdigits(n, len);
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

	if (!s)
		return (NULL);
	if (*s == '0')
		str = ft_strdup("(nil)");
	else
		str = ft_strjoin("0x", s);
	free (s);
	return (str);
}
