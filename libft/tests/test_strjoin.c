/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:08:07 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/29 13:11:43 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

// void test_strjoin(int c)
// {

// }

int	main(void)
{
	char *s = ft_strjoin("Test", "123");
	printf("s: \t\t%s\n", s);
	test_assert_str(s, "Test123");

	char *s1 = ft_strjoin("Test", "");
	printf("s: \t\t%s\n", s1);
	test_assert_str(s1, "Test");

	char *s2 = ft_strjoin("", "123");
	printf("s: \t\t%s\n", s2);
	test_assert_str(s2, "123");

	char *s3 = ft_strjoin("", "");
	printf("s: \t\t%s\n", s3);
	test_assert_str(s3, "");

	return (0);
}
