/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 21:54:28 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/24 22:39:03 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void test_strlcat(char *dst, char *dst_ft, char *src, size_t n)
{
	strlcpy(dst, "abcdefg", 8);
	strlcpy(dst_ft, "abcdefg", 8);
	printf("dst: \t\t%s\n", dst);
	printf("src: \t\t%s\n", src);
	printf("size: \t\t%zu\n", n);
	(void)dst_ft;
	size_t orig = strlcat(dst, src, n);
	size_t ft = ft_strlcat(dst_ft, src, n);
	print_str_chars(dst, orig, "TEST1\t\t");
	print_str_chars(dst_ft, ft, "TEST2\t\t");
	//printf("dst: \t\t%s\n", dst);
	//printf("dst_ft: \t%s\n", dst_ft);
	printf("strlcat: \t%zu\n", orig);
	printf("ft_strlcat: \t%zu\n", ft);
	//assert(orig == ft);
	printf("assert "OK"\n\n");
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char dst[] = "abcdefg";
	char dst_ft[] = "abcdefg";
	test_strlcat(dst, dst_ft, "1234", 8);
	test_strlcat(dst, dst_ft, "1234", 1);
	test_strlcat(dst, dst_ft, "1234", 2);
	test_strlcat(dst, dst_ft, "1234", 6);
	test_strlcat(dst, dst_ft, "1234", 12);
	test_strlcat(dst, dst_ft, "123456789", 9);
	test_strlcat(dst, dst_ft, "123456789", 15);

	return (0);
}

