/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strrchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 21:53:41 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/18 21:55:48 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void test_strrchr(int c)
{
	printf("----- strrchr -----\n");
	char str[] = "Hello, World!";
	printf("str: \t\t%s\n", str);
	printf("c: \t\t%c\n", c);
	printf("strrchr: \t%s\n", strrchr(str, c));
	printf("ft_strrchr: \t%s\n", ft_strrchr(str, c));
	test_mem_assert(strrchr(str, c), ft_strrchr(str, c));
}
