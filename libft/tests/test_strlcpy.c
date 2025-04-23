/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 21:54:28 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/23 20:04:46 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void test_strlcpy(char *dst, char *src, size_t n)
{
	char dst_ft[strlen(dst) + 1];
	printf("dst: \t\t%s\n", dst);
	printf("src: \t\t%s\n", src);
	printf("size: \t\t%zu\n", n);
	size_t orig = strlcpy(dst, src, n);
	size_t ft = ft_strlcpy(dst_ft, src, n);
	printf("dst: \t\t%s\n", dst);
	printf("dst_ft: \t%s\n", dst_ft);
	printf("strlcpy: \t%zu\n", orig);
	printf("ft_strlcpy: \t%zu\n", ft);
	assert(orig == ft);
	printf("assert "OK"\n\n");
	strlcpy(dst, "abcdefg", 8);
}

int	main(void)
{
	char dst[] = "abcdefg";
	test_strlcpy(dst, "1234", 3);
	test_strlcpy(dst, "1234", 1);
	test_strlcpy(dst, "1234", 0);
	test_strlcpy(dst, "1234", 6);
	test_strlcpy(dst, "123456789", 9);
	test_strlcpy(dst, "123456789", 15);

	return (0);
}

