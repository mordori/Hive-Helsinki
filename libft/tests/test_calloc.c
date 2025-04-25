/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_calloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 20:09:59 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/25 21:18:51 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void test_calloc(size_t nmemb, size_t size)
{
	printf("nmemb: \t\t%zu\n", nmemb);
	printf("size: \t\t%zu\n", size);
	printf("calloc: \t%s\n", (char *)calloc(nmemb, size));
	printf("ft_calloc \t%s\n", (char *)ft_calloc(nmemb, size));
	print_str_chars((char *)calloc(nmemb, size), nmemb, "calloc: \t");
	//ft_calloc(nmemb, size);
	print_str_chars((char *)ft_calloc(nmemb, size), nmemb, "ft_calloc: \t");
	printf("\n");
}

int	main(void)
{
	test_calloc(4, 1);
	test_calloc(4, 5);
	test_calloc(4, 0);
	test_calloc(0, 0);
	test_calloc(0, 5);
	test_calloc(SIZE_MAX, SIZE_MAX);

	return (0);
}
