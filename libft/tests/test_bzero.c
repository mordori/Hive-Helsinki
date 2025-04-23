/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 21:51:52 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/23 17:31:24 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void test_bzero(size_t n)
{
	char s_ft[] = "123456789";
	char s[] = "123456789";
	printf("s: \t\t%s\n", s);
	printf("n: \t\t%zu\n", n);
	ft_bzero(s_ft, n);
	bzero(s, n);
	print_str_chars(s, sizeof(s), "bzero: \t\t");
	print_str_chars(s_ft, sizeof(s_ft), "ft_bzero: \t");
	test_assert_str(s, s_ft);
}

int	main(void)
{
	test_bzero(5);
	test_bzero(0);
	test_bzero(10);

	return (0);
}
