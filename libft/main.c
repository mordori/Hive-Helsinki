/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:42:47 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/15 16:01:32 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

#include "libft.h"

int	main(void)
{
	int c = 97;
	printf("isalpha: %d\n", isalpha(c));
	printf("ft_isalpha: %d\n\n", ft_isalpha(c));

	c = 48;
	printf("isdigit: %d\n", isdigit(c));
	printf("ft_isdigit: %d\n\n", ft_isdigit(c));

	c = 97;
	printf("isalnum: %d\n", isalnum(c));
	printf("ft_isalnum: %d\n\n", ft_isalnum(c));

	char str[] = "Hello, World!";
	printf("strlen: %lu\n", strlen(str));
	printf("ft_strlen: %lu\n\n", ft_strlen(str));

	return (0);
}
