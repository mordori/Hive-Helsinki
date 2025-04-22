/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 21:54:11 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/18 21:55:54 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void test_strncmp()
{
	size_t n = 4;
	char str1[] = "abc";
	char str2[] = "abcdef";
	printf("str1: \t\t%s\n", str1);
	printf("str2: \t\t%s\n", str2);
	printf("n: \t\t%zu\n", n);
	printf("strncmp: \t%d\n", strncmp(str1, str2, n));
	printf("ft_strncmp: \t%d\n\n", ft_strncmp(str1, str2, n));
}
