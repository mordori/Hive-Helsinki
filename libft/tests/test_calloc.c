/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_calloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 20:09:59 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/26 16:44:51 by myli-pen         ###   ########.fr       */
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
	else if (!orig && !ft)
		printf("NULL\n\n");
	else
		printf("Invalid read size (nmemb/size is 0)\n\n");
	printf("\n");
	free(orig);
	free(ft);
}

int	main(void)
{
	test_calloc(4, 1);
	test_calloc(10, 5);
	test_calloc(4, 0);
	test_calloc(0, 0);
	test_calloc(0, 5);
	test_calloc(SIZE_MAX - 233553535353553, 1);
	//test_calloc(SIZE_MAX + 2, SIZE_MAX);

	return (0);
}
