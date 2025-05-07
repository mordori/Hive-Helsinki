/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 16:58:22 by myli-pen          #+#    #+#             */
/*   Updated: 2025/05/07 22:12:23 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//------------------------------------------------
// REMOVE!!!!!!!
#include <stdio.h>
//------------------------------------------------

/**
 * Allocates memory and converts `n` to a string.
 *
 * Handles negative numbers.
 *
 * @param n Integer to be converted.
 * @return String of the converted integer.
 */
static char	*ft_uitoa(unsigned int n)
{
	char	*str;
	int		i;

	str = ft_calloc(11 + 1, sizeof (char));
	if (!str)
		return (NULL);
	i = 0;
	while (n > 0)
	{
		str[i++] = n % 10 + '0';
		n /= 10;
	}
	return (str);
}

static int	format(char *str, va_list args)
{
	if (*str == 'c' || *str == '%')
	{
		ft_putchar_fd(*str, 1);
		return (1);
	}
	if (*str == 's')
		str = va_arg(args, char *);
	// else if (*str == 'p')
	// {

	// }
	else if (*str == 'd' || *str == 'i')
		str = ft_itoa(va_arg(args, int));
	else if (*str == 'u')
		str = ft_uitoa(va_arg(args, unsigned int));
	// else if (*str == 'x')
	// {

	// }
	// else if (*str == 'X')
	// {

	// }
	else
		return (-1);
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}

/**
 * DESTSETST
 *
 * @param str asd
 * @return rreter
 */
int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		len;

	if (!str)
		return (-1);
	va_start(args, str);
	len = 0;
	while (*str)
	{
		if (*str++ == '%')
			format((char *)str++, args);
		else
			ft_putchar_fd(*str++, 1);
	}
	va_end(args);
	return (0);
}
