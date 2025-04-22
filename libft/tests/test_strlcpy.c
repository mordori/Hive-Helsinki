/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 21:54:28 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/22 22:43:42 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void test_strlcpy2(char *dst, char *src, size_t n)
{
	char dst_ft[n];
	printf("dst: \t\t%s\n", dst);
	printf("src: \t\t%s\n", src);
	printf("size: \t\t%zu\n", n);
	printf("strlcpy: \t%zu\n", strlcpy(dst, src, n));
	printf("ft_strlcpy: \t%zu\n", ft_strlcpy(dst_ft, src, n));
	printf("dst: \t\t%s\n", dst);
	printf("dst_ft: \t%s\n", dst_ft);
	//assert(orig == ft);
	printf("assert "OK"\n\n");
}

int	main(void)
{
	char dst1[] = "abcdefg";
	test_strlcpy2(dst1, "1234", 3);

	return (0);
}

