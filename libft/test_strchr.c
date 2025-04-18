/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 21:53:24 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/18 21:55:43 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void test_strchr(int c)
{
	printf("----- strchr -----\n");
	char str[] = "Hello, World!";
	printf("str: \t\t%s\n", str);
	printf("c: \t\t%c\n", c);
	printf("strchr: \t%s\n", strchr(str, c));
	printf("ft_strchr: \t%s\n", ft_strchr(str, c));
	test_mem_assert(strchr(str, c), ft_strchr(str, c));
}
