/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_calloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 20:09:59 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/29 14:15:58 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void test_calloc(size_t nmemb, size_t size)
{
	char *orig = (char *)calloc(nmemb, size);
	char *ft = (char *)ft_calloc(nmemb, size);
	printf("nmemb: \t\t%zu\n", nmemb);
	printf("size: \t\t%zu\n", size);
	if (nmemb && size && orig && ft)
	{
		print_str_chars(orig, nmemb, "calloc: \t");
		print_str_chars(ft, nmemb, "ft_calloc: \t");
		if (orig && ft)
		{
			test_assert_str(orig, ft);
		}
	}
	else if (!orig || !ft)
		printf("Overflow or malloc() fail, returned NULL\n\n");
	else
		printf("Memory succefully allocated with [nmemb] or [size] 0\n\n");
	printf("\n");
	free(orig);
	free(ft);
}

int	main(void)
{
	// Prints only one element on success.
	test_calloc(4, 1);
	test_calloc(10, 5);
	test_calloc(0, 4);
	test_calloc(0, 0);
	test_calloc(0, 5);

	// Doesnt overflow, but malloc() fails and returns NULL
	test_calloc(2335535353535533, 1);

	test_calloc(SIZE_MAX, SIZE_MAX);

	return (0);
}
