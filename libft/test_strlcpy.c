/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 21:54:28 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/18 21:56:00 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void test_strlcpy()
{
	char dst1[] = "abcdefg";
	char src1[] = "1234";
	char dst2[] = "abcdefg";
	char src2[] = "1234";
	size_t size = 3;
	printf("dst: \t\t%s\n", dst1);
	printf("src: \t\t%s\n", src1);
	printf("size: \t\t%zu\n", sizeof (dst1));
	printf("strlcpy: \t%zu\n", strlcpy(dst1, src1, size));
	printf("dst1: \t\t%s\n", dst1);
	printf("ft_strlcpy: \t%zu\n", ft_strlcpy(dst2, src2, size));
	printf("dst2: \t\t%s\n\n", dst2);
}
