/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_default.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:08:07 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/22 20:47:53 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void test_default(int c)
{
	print_c(c);
	printf("default: \t%d\n", default(c));
	printf("ft_default \t%d\n", ft_default(c));
	test_assert(default, ft_default, c);
}

int	main(void)
{
	test_all(test_default);

	return (0);
}
