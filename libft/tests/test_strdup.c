/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strdup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:08:07 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/22 20:47:53 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void test_strdup(char *s)
{
	char *orig = strdup(s);
	char *ft = ft_strdup(s);
	printf("s: \t\t%s\n", s);
	printf("strdup: \t%s\n", orig);
	printf("ft_strdup \t%s\n", ft);
	test_assert_str(orig, ft);
	free(orig);
	free(ft);
}

int	main(void)
{
	test_strdup("Test!");
	test_strdup("");

	return (0);
}
