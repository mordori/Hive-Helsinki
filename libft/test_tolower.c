/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_tolower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 21:53:05 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/18 21:55:37 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void test_tolower(int c)
{
	printf("----- tolower -----\n");
	printf("c: \t\t%c\n", c);
	printf("tolower: \t%c\n", tolower(c));
	printf("ft_tolower: \t%c\n", ft_tolower(c));
	test_assert(tolower, ft_tolower, c);
}
