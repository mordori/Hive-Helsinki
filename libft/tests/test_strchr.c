/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 21:53:24 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/24 17:56:47 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void test_strchr(int c)
{
	char str[] = "Hello, t World!";
	printf("str: \t\t%s\n", str);
	print_c(c);
	printf("strchr: \t%s\n", strchr(str, c));
	printf("ft_strchr: \t%s\n", ft_strchr(str, c));
	test_mem_assert(strchr(str, c), ft_strchr(str, c));
	test_assert_str(strchr(str, c), ft_strchr(str, c));
}

int	main(void)
{
	test_strchr('t' + 256);
	test_all(test_strchr);

	return (0);
}
