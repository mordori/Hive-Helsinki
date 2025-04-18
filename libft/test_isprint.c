/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 21:51:00 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/18 21:56:14 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void test_isprint(int c)
{
	printf("----- isprint -----\n");
	print_c(c);
	printf("isprint: \t%d\n", isprint(c));
	printf("ft_isprint: \t%d\n", ft_isprint(c));
	test_assert(isprint, ft_isprint, c);
}
