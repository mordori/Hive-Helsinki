/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strrchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 21:53:41 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/24 18:07:22 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void test_strrchr(int c)
{
	char str[] = "Hello, t World!";
	printf("str: \t\t%s\n", str);
	print_c(c);
	printf("strrchr: \t%s\n", strrchr(str, c));
	printf("ft_strrchr: \t%s\n", ft_strrchr(str, c));
	test_mem_assert(strrchr(str, c), ft_strrchr(str, c));
	test_assert_str(strrchr(str, c), ft_strrchr(str, c));
}

int	main(void)
{
	test_strrchr('t' + 256);
	test_all(test_strrchr);

	return (0);
}
