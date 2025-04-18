/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:42:47 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/18 21:57:44 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

int	main(int argc, char *argv[])
{
	printf("\n");
	if (argc == 1)
	{
		test_isalpha('a');
		test_isdigit('0');
		test_isalnum('9');
		test_isascii('y');
		test_isprint('!');
		test_strlen("Hello, World!");
		test_memset();
		test_bzero();
		test_memcpy();

		test_toupper('a');
		test_tolower('A');
		test_strchr('o');
		test_strrchr('o');
		test_strncmp();
		test_strlcpy();

		char s9[] = "123456789";
		char s10[] = "abcd";
		size_t n = 3;
		//memmove(s5, s6, n);
		ft_memmove(s9, s10, n);
		printf("\n");
	}
	else if (argc == 2)
	{
		if (strcmp(argv[1], "ft_isalpha.c") == 0)
		{
			test_chrset(test_isalpha);
			test_uchar_limits(test_isalpha);
		}
		else if (strcmp(argv[1], "ft_isdigit.c") == 0)
		{
			test_chrset(test_isdigit);
			test_uchar_limits(test_isdigit);
		}
		else if (strcmp(argv[1], "ft_isalnum.c") == 0)
		{
			test_chrset(test_isalnum);
			test_uchar_limits(test_isalnum);
		}
		else if (strcmp(argv[1], "ft_isascii.c") == 0)
		{
			test_chrset(test_isascii);
			test_uchar_limits(test_isascii);
		}
		else if (strcmp(argv[1], "ft_isprint.c") == 0)
		{
			test_chrset(test_isprint);
			test_uchar_limits(test_isprint);
		}
	}

	return (0);
}
