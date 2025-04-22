/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 21:52:21 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/22 17:59:04 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void test_memcpy()
{
	printf("----- memcpy -----\n");
	char s5[] = "123456789";
	char s6[] = "abcd";
	char s7[] = "123456789";
	char s8[] = "abcd";
	size_t n = 3;
	printf("s: \t\t%s\n", s5);
	printf("s: \t\t%s\n", s6);
	printf("n: \t\t%zu\n", n);
	memcpy(s5, s6, n);
	ft_memcpy(s7, s8, n);
	print_str_chars(s5, sizeof(s5), "memcpy: \t");
	print_str_chars(s7, sizeof(s7), "ft_memcpy: \t");
	test_assert_str(s5, s7, sizeof(s5));
}
