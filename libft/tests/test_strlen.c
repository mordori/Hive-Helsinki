/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 21:51:18 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/18 21:56:07 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void test_strlen(char *str)
{
	printf("----- strlen -----\n");
	size_t orig = strlen(str);
	size_t ft = ft_strlen(str);
	printf("str: \t\t%s\n", str);
	printf("strlen: \t%lu\n", orig);
	printf("ft_strlen: \t%lu\n", ft);

	assert(orig == ft);
	printf("-------"OK"-------\n\n\n");
}
