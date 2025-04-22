/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalnum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 21:50:00 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/18 21:56:24 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void test_isalnum(int c)
{
	printf("----- isalnum -----\n");
	print_c(c);
	printf("isalnum: \t%d\n", isalnum(c));
	printf("ft_isalnum: \t%d\n", ft_isalnum(c));
	test_assert(isalnum, ft_isalnum, c);
}
