/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 21:34:33 by myli-pen          #+#    #+#             */
/*   Updated: 2025/05/09 06:01:16 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	// Output looks the same with putstr, but it doesn't write '\0' to stdout so use putchar for that.
	printf("\033[33mc c c c c\033[0m\n");
	printf("\t\tReturns: %d\tprintf\n", printf(".%c.%c.%c.%c.%c.", '\0', 0, '\0', '0', '\0'));
	ft_printf("\t\tReturns: %d\tft_printf\n\n", ft_printf(".%c.%c.%c.%c.%c.", '\0', 0, '\0', '0', '\0'));

	char *str1 = NULL;
	char *str2 = "Hello";
	char *str3 = "";
	printf("\033[33ms\033[0m\n");
	printf("\t\tReturns: %d\n", printf("%s", str1));
	ft_printf("\t\tReturns: %d\n", ft_printf("%s", str1));
	printf("\t\tReturns: %d\n", printf("%s", str2));
	ft_printf("\t\tReturns: %d\n", ft_printf("%s", str2));
	printf("\t\tReturns: %d\n", printf("%s", str3));
	ft_printf("\t\tReturns: %d\n\n", ft_printf("%s", str3));

	char *ptr1 = ft_calloc(1, sizeof (char *));
	printf("\033[33mp\033[0m\n");
	printf("\t\tReturns: %d\n", printf("%p", (void *)-ULONG_MAX));
	ft_printf("\t\tReturns: %d\n", ft_printf("%p", (void *)-ULONG_MAX));
	printf("\t\tReturns: %d\n", printf("%p", NULL));
	ft_printf("\t\tReturns: %d\n", ft_printf("%p", NULL));
	printf("\tReturns: %d\n", printf("%p", ptr1));
	ft_printf("\tReturns: %d\n\n", ft_printf("%p", ptr1));

	printf("\033[33md\033[0m\n");
	printf("\t\tReturns: %d\n", printf("%d", 1000));
	ft_printf("\t\tReturns: %d\n", ft_printf("%d", 1000));
	printf("\t\tReturns: %d\n", printf("%d", 0));
	ft_printf("\t\tReturns: %d\n\n", ft_printf("%d", 0));

	printf("\033[33mi\033[0m\n");
	printf("\t\tReturns: %i\n", printf("%i", -1000));
	ft_printf("\t\tReturns: %i\n\n", ft_printf("%i", -1000));

	printf("\033[33mu\033[0m\n");
	printf("\tReturns: %d\n", printf("%u", -1));
	ft_printf("\tReturns: %d\n\n", ft_printf("%u", -1));

	printf("\033[33mx\033[0m\n");
	printf("\tReturns: %d\n", printf("%x", -1));
	ft_printf("\tReturns: %d\n\n", ft_printf("%x", -1));

	printf("\033[33mX\033[0m\n");
	printf("\tReturns: %d\n", printf("%X", -1));
	ft_printf("\tReturns: %d\n\n", ft_printf("%X", -1));

	printf("\033[33m%%\033[0m\n");
	printf("\t\tReturns: %d\n", printf("%%"));
	ft_printf("\t\tReturns: %d\n\n", ft_printf("%%"));

	char *ptr2 = ft_calloc(1, sizeof (char *));
	printf("\033[33mc s p d i u x X %%\033[0m\n");
	printf("\tReturns: %d\n", printf("%c %s %p %d %i %u %x %X %%", '$', "Hello", ptr2, 3, 7, 12, 15, 15));
	ft_printf("\tReturns: %d\n\n", ft_printf("%c %s %p %d %i %u %x %X %%", '$', "Hello", ptr2, 3, 7, 12, 15, 15));

	ft_printf("\033[33mld (undefined)\033[0m");
	ft_printf("\tReturns: %d\n\n", ft_printf("%ld", (long)1000));

	free (ptr1);
	free (ptr2);
	return (0);
}
