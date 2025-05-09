/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 16:58:22 by myli-pen          #+#    #+#             */
/*   Updated: 2025/05/09 05:43:58 by myli-pen         ###   ########.fr       */
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
	else if (c == 'p')
		str = ft_ptrstr(ft_uitoa(va_arg(*args, uintptr_t), BASE16_LOW));
	else if (c == 'd' || c == 'i')
		str = ft_itoa(va_arg(*args, int));
	else if (c == 'u')
		str = ft_uitoa(va_arg(*args, unsigned int), BASE10);
	else if (c == 'x')
		str = ft_uitoa(va_arg(*args, unsigned int), BASE16_LOW);
	else if (c == 'X')
		str = ft_uitoa(va_arg(*args, unsigned int), BASE16);
	else
		return (NULL);
	return (str);
}

static int	ft_printformat(char c, va_list *args)
{
	int		len;
	char	*str;

	str = ft_strformat(c, args);
	if (c == 's' && !str)
		str = ft_strdup("(null)");
	else if (!str)
		return (-1);
	if (c == 'p' && ft_strlen(str) == 3 && !ft_strncmp(str, "0x0", 3))
	{
		free (str);
		str = ft_strdup("(nil)");
	}
	len = ft_strlen(str);
	if (c == 'c')
		len = 1;
	if (c == 'c' && !*str)
		ft_putchar_fd('\0', 1);
	else
		ft_putstr_fd(str, 1);
	free(str);
	return (len);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		len;
	int		add;

	if (!s)
		return (-1);
	va_start(args, s);
	len = 0;
	while (*s)
	{
		if (*s++ == '%')
		{
			add = ft_printformat(*s++, &args);
			if (add == -1)
				return (-1);
			len += add;
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
