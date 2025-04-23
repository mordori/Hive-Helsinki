/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 21:51:35 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/23 21:53:29 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void test_memchr(int c)
{
	char s[] = "Hello, world! abc 1990";
	size_t n = 25;
	printf("s: \t\t%s\n", s);
	print_c(c);
	printf("n: \t\t%zu\n", n);
	printf("memchr: \t%s\n", (char*)memchr(s, c, n));
	printf("ft_memchr: \t%s\n", (char*)ft_memchr(s, c, n));
	test_mem_assert(memchr(s, c, n), ft_memchr(s, c, n));
	test_assert_str((char*)memchr(s, c, n), (char*)ft_memchr(s, c, n));
}

int	main(void)
{
	test_chrset(test_memchr);

	return (0);
}
