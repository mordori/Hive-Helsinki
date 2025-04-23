/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 21:54:11 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/23 15:30:42 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void test_strncmp(char *s1, char *s2, size_t n)
{
	printf("s1: \t\t%s\n", s1);
	printf("s2: \t\t%s\n", s2);
	printf("n: \t\t%zu\n", n);
	int orig = strncmp(s1, s2, n);
	int ft = ft_strncmp(s1, s2, n);
	printf("strncmp: \t%d\n", orig);
	printf("ft_strncmp: \t%d\n", ft);
	assert(orig == ft);
	printf("assert "OK"\n\n");
}

int	main(void)
{
	test_strncmp("abc", "abcdef", 4);
	test_strncmp("", "abcdef", 4);
	test_strncmp("", "abcdef", 0);
	test_strncmp("abc", "", 0);
	test_strncmp("", "", 0);
	test_strncmp("", "", 3);
	test_strncmp("abc\0", "abc\200", 6);
	test_strncmp("abc\0", "abc\xFF", 6);

	return (0);
}
