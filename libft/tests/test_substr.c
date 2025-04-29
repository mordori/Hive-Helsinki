/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_substr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:08:07 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/22 20:47:53 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void test_substr(char *s, unsigned int start, size_t len)
{
	print_str_chars(s, ft_strlen(s) + 1, "s: \t\t");
	printf("start: \t\t%d\n", start);
	printf("len: \t\t%zu\n", len);
	char *ft = ft_substr(s, start, len);
	print_str_chars(ft, ft_strlen(ft) + 1, "substr: \t");
	printf("\n");
	free(ft);
}

int	main(void)
{
	test_substr("Test!", 2, 4);
	test_substr("Good", 0, 1);
	test_substr("Good", 0, 0);
	test_substr("Bad", 4, 1);
	test_substr("Bad", 5, 1);
	test_substr("Bad", 5, 7);
	test_substr("Bad", 0, 7);
	test_substr("", 5, 7);

	//test_substr("");

	return (0);
}
