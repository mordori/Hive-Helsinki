/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 16:58:22 by myli-pen          #+#    #+#             */
/*   Updated: 2025/05/08 23:23:05 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//------------------------------------------------
// REMOVE!!!!!!!
#include <stdio.h>
//------------------------------------------------

/**
 * Counts the number of digits in `n`.
 *
 * @param n Integer number.
 * @return Number of digits in an integer.
 */
static int	ft_count_digits_base(unsigned int n, const size_t len)
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

static char	*ft_uitoa_base(unsigned int n, const char *base)
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

static char	*ft_ptrstr(char *s)
{
	char	*str;

	str = ft_strjoin("0x", s);
	free (s);
	return (str);
}

static char	*ft_strformat(char c, va_list *args)
{
	char	*str;

	if (c == '%')
		str = ft_memset(ft_calloc(2, 1), c, 1);
	else if (c == 'c')
		str = ft_memset(ft_calloc(2, 1), va_arg(*args, unsigned int), 1);
	else if (c == 's')
		str = ft_strdup(va_arg(*args, char *));
	else if (c == 'p')
		str = ft_ptrstr(ft_uitoa_base(va_arg(*args, unsigned int), BASE16LOW));
	else if (c == 'd' || c == 'i')
		str = ft_itoa(va_arg(*args, int));
	else if (c == 'u')
		str = ft_uitoa_base(va_arg(*args, unsigned int), BASE10);
	else if (c == 'x')
		str = ft_uitoa_base(va_arg(*args, unsigned int), BASE16LOW);
	else if (c == 'X')
		str = ft_uitoa_base(va_arg(*args, unsigned int), BASE16);
	else
		return (NULL);
	return (str);
}

/**
 * DESTSETST
 *
 * @param s asd
 * @return rreter
 */
int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		len;
	char	*str;

	if (!s)
		return (-1);
	va_start(args, s);
	len = 0;
	while (*s)
	{
		if (*s++ == '%')
		{
			str = ft_strformat(*s++, &args);
			len += ft_strlen(str);
			ft_putstr_fd(str, 1);
			free(str);
		}
		else
		{
			ft_putchar_fd(*(s - 1), 1);
			++len;
		}
	}
	va_end(args);
	return (len);
}
