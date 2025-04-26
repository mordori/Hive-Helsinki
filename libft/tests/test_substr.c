/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_substr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:08:07 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/22 20:47:53 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void test_substr(char *s, unsigned int start, size_t len)
{
	char *ft = ft_substr(s, start, len);
	printf("s: \t\t%s\n", s);
	//printf("ft_substr \t%s\n", ft);
	print_str_chars(ft, ft_strlen(ft) + 1, "ft: \t\t");
	free(ft);
}

int	main(void)
{
	test_substr("Test!", 1, 4);
	test_substr("tripouille", 1, 1);
	test_substr("tri", 4, 1);

	//test_substr("");

	return (0);
}
