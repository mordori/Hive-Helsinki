/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isascii.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 21:50:39 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/18 21:56:19 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void test_isascii(int c)
{
	printf("----- isascii -----\n");
	print_c(c);
	printf("isascii: \t%d\n", isascii(c));
	printf("ft_isascii: \t%d\n", ft_isascii(c));
	test_assert(isascii, ft_isascii, c);
}
