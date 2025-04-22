/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 21:28:36 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/22 20:04:31 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void test_isalpha(int c)
{
	print_c(c);
	printf("isalpha: \t%d\n", isalpha(c));
	printf("ft_isalpha: \t%d\n", ft_isalpha(c));
	test_assert(isalpha, ft_isalpha, c);
}

int	main(void)
{
	test_all(test_isalpha);

	return (0);
}
