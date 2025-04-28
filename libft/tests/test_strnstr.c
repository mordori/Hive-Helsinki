/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strnstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 21:53:24 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/24 17:56:47 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void test_strnstr(char *big, char *little, size_t len)
{
	printf("big: \t\t%s\n", big);
	printf("little: \t%s\n", little);
	printf("len: \t\t%zu\n", len);

	printf("strnstr: \t%s\n", strnstr(big, little, len));
	printf("ft_strnstr: \t%s\n", ft_strnstr(big, little, len));
	test_mem_assert(strnstr(big, little, len), ft_strnstr(big, little, len));
	test_assert_str(strnstr(big, little, len), ft_strnstr(big, little, len));
}

int	main(void)
{
	char big[] = "Hello, World!";
	char big2[] = "e999";
	test_strnstr(big, big2, 10);
	test_strnstr(big, "ello", 10);
	test_strnstr(big, "ello", 3);
	test_strnstr(big, "ello", 0);
	test_strnstr(big, "", 0);
	test_strnstr(big, "asdasdasdasdasdasdasdsadd", 100);
	test_strnstr(big2, "e", 2);
	test_strnstr(big2, "9\0", 2);

	return (0);
}
