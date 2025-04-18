/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 21:51:52 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/18 21:55:21 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void test_bzero()
{
	char s3[] = "123456789";
	char s4[] = "123456789";
	size_t n = 2;
	printf("s: \t\t%s\n", s3);
	printf("n: \t\t%zu\n", n);
	bzero(s3, n);
	ft_bzero(s4, n);
	print_str_chars(s3, sizeof(s3), "bzero: \t\t");
	print_str_chars(s4, sizeof(s4), "ft_bzero: \t");
	printf("\n");
}
