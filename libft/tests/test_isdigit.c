/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isdigit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 21:46:50 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/22 21:11:24 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void test_isdigit(int c)
{
	print_c(c);
	printf("isdigit: \t%d\n", isdigit(c));
	printf("ft_isdigit: \t%d\n", ft_isdigit(c));
	test_assert(isdigit, ft_isdigit, c);
}

int	main(void)
{
	test_all(test_isdigit);

	return (0);
}
