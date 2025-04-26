/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_toupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 21:52:44 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/26 19:11:09 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void test_toupper(int c)
{
	print_c(c);
	printf("toupper: \t%c\n", toupper(c));
	printf("ft_toupper: \t%c\n", ft_toupper(c));
	test_assert(toupper, ft_toupper, c);
}

int	main(void)
{
	printf("xFF test: \t%d\n", toupper('\xFF'));
	printf("xFF test: \t%d\n\n", ft_toupper('\xFF'));
	printf("xFF test: \t%d\n", toupper('\xFE'));
	printf("xFF test: \t%d\n\n", ft_toupper('\xFE'));

	test_all(test_toupper);

	return (0);
}
