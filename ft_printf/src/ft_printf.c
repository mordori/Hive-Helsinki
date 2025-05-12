/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 16:58:22 by myli-pen          #+#    #+#             */
/*   Updated: 2025/05/12 08:49:25 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*ft_strformat(char c, va_list *args)
{
	char	*str;

	if (c == '%')
		str = ft_memset(ft_calloc(2, 1), c, 1);
	else if (c == 'c')
		str = ft_memset(ft_calloc(2, 1), va_arg(*args, unsigned int), 1);
	else if (c == 's')
		str = ft_strdup(va_arg(*args, char *));
	else if (c == 'd' || c == 'i')
		str = ft_itoa(va_arg(*args, int));
	else if (c == 'u')
		str = ft_uitoa(va_arg(*args, uintptr_t), BASE_10);
	else if (c == 'p' || c == 'x' || c == 'X')
		str = ft_uitoa(va_arg(*args, uintptr_t), BASE_16);
	else
		return (NULL);
	if (c == 'p')
		str = ft_ptrstr(str);
	if (c == 'p' || c == 'x')
		ft_striteri(str, ft_tolower);
	if (c == 's' && !str)
		str = ft_strdup("(null)");
	return (str);
}

static int	ft_strprint(char c, va_list *args)
{
	int		bytes;
	char	*str;

	str = ft_strformat(c, args);
	if (!str)
		return (-1);
	if (c == 'c')
		bytes = ft_putchar_fd(*str, 1);
	else
		bytes = ft_putstr_fd(str, 1);
	free(str);
	return (bytes);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		totalbytes;
	int		bytes;

	if (!s)
		return (-1);
	va_start(args, s);
	totalbytes = 0;
	while (*s)
	{
		if (*s++ == '%')
			bytes = ft_strprint(*s++, &args);
		else
			bytes = ft_putchar_fd(*(s - 1), 1);
		if (bytes == -1)
			return (-1);
		totalbytes += bytes;
	}
	va_end(args);
	return (totalbytes);
}
