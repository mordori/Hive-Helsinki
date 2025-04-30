/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_tolower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 21:53:05 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/30 12:43:22 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void test_tolower(int c)
{
	print_c(c);
	printf("tolower: \t%c\n", tolower(c));
	printf("ft_tolower: \t%c\n", ft_tolower(c));
	test_assert(tolower, ft_tolower, c);
}

int	main(void)
{
	printf("xFF test: \t%d\n", tolower('\xFF'));
	printf("xFF test: \t%d\n\n", ft_tolower('\xFF'));
	printf("xFF test: \t%d\n", tolower('\xFE'));
	printf("xFF test: \t%d\n\n", ft_tolower('\xFE'));

	printf("255 test: \t%d\n", tolower(255));
	printf("255 test: \t%d\n\n", ft_tolower(255));

	test_all(test_tolower);

	return (0);
}
