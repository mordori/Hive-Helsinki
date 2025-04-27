/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 21:51:35 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/27 15:58:50 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void test_memset(int c)
{
	char s[] = "123456789";
	char s_ft[] = "123456789";
	size_t n = 5;
	printf("s: \t\t%s\n", s);
	print_c(c);
	printf("n: \t\t%zu\n", n);
	memset(s, c, n);
	ft_memset(s_ft, c, n);
	printf("memset: \t%s\n", s);
	printf("ft_memset: \t%s\n", s_ft);
	test_assert_str(s, s_ft);
}

int	main(void)
{
	test_chrset(test_memset);

	char *s_ft = NULL;
	char s_ft2[] = "abcdefg";
	int c = 75;
	size_t n = 2;
	size_t n2 = 0;
	printf("s: \t\t%s\n", s_ft);
	print_c(c);
	printf("n: \t\t%zu\n", n);
	ft_memset(s_ft, c, n);
	print_str_chars(s_ft, sizeof (s_ft), "ft_memset: \t");

	printf("s: \t\t%s\n", s_ft2);
	print_c(c);
	printf("n: \t\t%zu\n", n2);
	ft_memset(s_ft2, c, n2);
	print_str_chars(s_ft2, sizeof (s_ft2), "ft_memset: \t");
	printf("\n");

	return (0);
}
