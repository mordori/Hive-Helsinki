/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 21:51:35 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/22 17:59:01 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void test_memset()
{
	printf("----- memset -----\n");
	char s1[] = "123456789";
	char s2[] = "123456789";
	int c = '#';
	size_t n = 3;
	printf("s: \t\t%s\n", s1);
	printf("c: \t\t%d\n", c);
	printf("n: \t\t%zu\n", n);
	printf("memset: \t%s\n", (char *) memset(s1, c, n));
	printf("ft_memset: \t%s\n\n", (char *) ft_memset(s2, c, n));
}
