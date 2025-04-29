/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:08:07 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/29 12:50:44 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

int	main(void)
{

	printf("s: \t\t-----------\n");
	printf("set: \t\t-\n");
	char *s = ft_strtrim("-----------", "-");
	print_str_chars(s, strlen(s) + 1, "ft_strtrim: \t");
	printf("\n");

	printf("s: \t\t+-_+Test---+++---\n");
	printf("set: \t\t-+\n");
	s = ft_strtrim("+-!+Test---+++---", "-+");
	print_str_chars(s, strlen(s) + 1, "ft_strtrim: \t");
	printf("\n");

	printf("s: \t\t123456789\n");
	printf("set: \t\t1389\n");
	s = ft_strtrim("123456789", "1389");
	print_str_chars(s, strlen(s) + 1, "ft_strtrim: \t");
	printf("\n");

	return (0);
}
