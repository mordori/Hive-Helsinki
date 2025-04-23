/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 18:58:20 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/23 22:17:09 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void test_memmove(char *dest, char *src, char *dest_ft, char *src_ft, size_t n)
{
	print_str_chars(dest, n, "dest: \t\t");
	print_str_chars(src, n, "src: \t\t");
	printf("n: \t\t%zu\n", n);
	memmove(dest, src, n);
	ft_memmove(dest_ft, src_ft, n);
	print_str_chars(dest, n, "memmove: \t");
	print_str_chars(dest_ft, n, "ft_memmove: \t");
	test_mem_assert(dest, dest_ft);
	test_assert_str(dest, dest_ft);
}

int	main(void)
{
	char dest[10] = {0};
	char dest_ft[10] = {0};

	char s[] = {65, 66, 67, 68, 69, 0, 45};
	char s0[] = {0, 0, 0, 0, 0, 0, 0};

	test_memmove(dest, "abcdef", dest_ft, "abcdef", 6);
	test_memmove(dest, dest + 1, dest_ft, dest_ft + 1, 4);
	test_memmove(dest + 1, dest, dest_ft + 1, dest_ft, 6);
	test_memmove(s0, s, s0, s, 7);

	return (0);
}
