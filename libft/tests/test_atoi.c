/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:08:07 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/22 20:47:53 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void test_atoi(char *nptr)
{
	printf("nptr: \t\t\"%s\"\n", nptr);
	int orig = atoi(nptr);
	int ft = ft_atoi(nptr);
	printf("atoi: \t\t%d\n", orig);
	printf("ft_atoi: \t%d\n", ft);
	assert(orig == ft);
	printf("assert "OK"\n\n");
}

int	main(int argc, char *argv[])
{
	test_atoi("123");
	test_atoi("12s3");
	test_atoi("\67octal");
	test_atoi("\x32hex");
	test_atoi("+ - -123    ");
	test_atoi("+-123    ");
	test_atoi("-123    ");
	test_atoi("  -123    ");
	test_atoi("  --123    ");
	test_atoi("  \t  123");
	test_atoi("2147483647");
	test_atoi("-2147483648");
	if(argc == 2)
		test_atoi(argv[1]);
	return (0);
}
