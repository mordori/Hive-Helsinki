/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 21:34:33 by myli-pen          #+#    #+#             */
/*   Updated: 2025/05/08 04:34:11 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	printf("d\n");
	printf("\t\tReturns: %d\n", printf("%d", -0));
	ft_printf("\t\tReturns: %d\n\n", ft_printf("%d", -0));

	printf("i\n");
	printf("\t\tReturns: %i\n", printf("%i", -1000));
	ft_printf("\t\tReturns: %i\n\n", ft_printf("%i", -1000));

	printf("u\n");
	printf("\t\tReturns: %d\n", printf("%u", 100));
	ft_printf("\t\tReturns: %d\n\n", ft_printf("%u", 100));

	printf("s\n");
	printf("\tReturns: %d\n", printf("%s", "Hello, World!"));
	ft_printf("\tReturns: %d\n\n", ft_printf("%s", "Hello, World!"));

	return (0);
}
