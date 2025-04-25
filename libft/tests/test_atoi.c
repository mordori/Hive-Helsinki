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

void test_atoi(int c)
{
	print_c(c);
	printf("atoi: \t%d\n", atoi(c));
	printf("ft_atoi \t%d\n", ft_atoi(c));
	test_assert(atoi, ft_atoi, c);
}

int	main(void)
{
	test_all(test_atoi);

	return (0);
}
