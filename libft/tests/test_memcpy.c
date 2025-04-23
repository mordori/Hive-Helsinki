/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 21:52:21 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/23 18:54:49 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void test_memcpy(char *dest, char *src, size_t n)
{
	size_t len = strlen(dest) + 1;
	char dest_ft[len];
	strlcpy(dest_ft, dest, len);
	printf("s: \t\t%s\n", dest);
	printf("n: \t\t%zu\n", n);
	memcpy(dest, src, n);
	ft_memcpy(dest_ft, src, n);
	print_str_chars(dest, len, "memcpy: \t");
	print_str_chars(dest_ft, len, "ft_memcpy: \t");
	test_assert_str(dest, dest_ft);
	strlcpy(dest, "123456789", 10);
}

int	main(void)
{
	char dest[] = "123456789";
	test_memcpy(dest, "abc", 3);
	test_memcpy(dest, "abc", 5);
	test_memcpy(dest, "abcefg", 5);
	test_memcpy(dest, "abcefg", 0);
	test_memcpy(dest, "", 4);
	strlcpy(dest, "", 1);
	test_memcpy(dest, "abcde", 4);

	return (0);
}
