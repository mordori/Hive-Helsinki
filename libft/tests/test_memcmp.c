/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 16:10:00 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/24 18:11:27 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void test_memcmp(char *s1, char *s2, size_t n)
{
	printf("s1: \t\t%s\n", s1);
	printf("s2: \t\t%s\n", s2);
	printf("n: \t\t%zu\n", n);
	int orig = memcmp(s1, s2, n);
	int ft = ft_memcmp(s1, s2, n);
	printf("memcmp: \t%d\n", orig);
	printf("ft_memcmp: \t%d\n", ft);
	assert(orig == ft);
	printf("assert "OK"\n\n");
}

int	main(void)
{
	test_memcmp("abc", "abcdef", 4);
	test_memcmp("abcd", "abcd", 4);
	int s[] = {-128, 512, 127, 0};
	int sCpy[] = {-128, 512, 127, 0};
	int orig = memcmp(s, sCpy, 4);
	int ft = ft_memcmp(s, sCpy, 4);
	printf("memcmp: \t%d\n", orig);
	printf("ft_memcmp: \t%d\n", ft);
	assert(orig == ft);
	printf("assert "OK"\n\n");
	char s2[] = {-128, 0, 127, 0};
	char sCpy2[] = {-128, 0, 127, 0};
	char s3[] = {0, 0, 127, 0};
	test_memcmp(s2, sCpy2, 4);
	test_memcmp(s2, s3, 0);
	test_memcmp("", "abcdef", 4);
	test_memcmp("", "abcdef", 0);
	test_memcmp("abc", "", 0);
	test_memcmp("", "", 0);
	test_memcmp("", "", 3);
	test_memcmp("abc\0", "abc\200", 6);
	test_memcmp("abc\0", "abc\xFF", 6);

	return (0);
}
