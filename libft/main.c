/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:42:47 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/16 13:58:49 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <bsd/string.h>

#include "libft.h"

int	main(void)
{
	int c = 'a';
	printf("\nc: %d\n", c);
	printf("isalpha: %d\n", isalpha(c));
	printf("ft_isalpha: %d\n\n", ft_isalpha(c));

	c = '0';
	printf("c: %d\n", c);
	printf("isdigit: %d\n", isdigit(c));
	printf("ft_isdigit: %d\n\n", ft_isdigit(c));

	c = '9';
	printf("c: %d\n", c);
	printf("isalnum: %d\n", isalnum(c));
	printf("ft_isalnum: %d\n\n", ft_isalnum(c));

	c = 'y';
	printf("c: %d\n", c);
	printf("isascii: %d\n", isascii(c));
	printf("ft_isascii: %d\n\n", ft_isascii(c));

	c = '!';
	printf("c: %d\n", c);
	printf("isprint: %d\n", isprint(c));
	printf("ft_isprint: %d\n\n", ft_isprint(c));

	c = 'a';
	printf("c: %d\n", c);
	printf("toupper: %d\n", toupper(c));
	printf("ft_toupper: %d\n\n", ft_toupper(c));

	c = 'A';
	printf("c: %d\n", c);
	printf("tolower: %d\n", tolower(c));
	printf("ft_tolower: %d\n\n", ft_tolower(c));

	char str[] = "Hello, World!";
	printf("str: %s\n", str);
	printf("strlen: %lu\n", strlen(str));
	printf("ft_strlen: %lu\n\n", ft_strlen(str));

	c = 'o';
	printf("str: %s\n", str);
	printf("c: %d\n", c);
	printf("strchr: %s\n", strchr(str, c));
	printf("ft_strchr: %s\n\n", ft_strchr(str, c));

	c = 9;
	printf("str: %s\n", str);
	printf("c: %d\n", c);
	printf("strrchr: %s\n", strrchr(str, c));
	printf("ft_strrchr: %s\n\n", ft_strrchr(str, c));

	int n = 2;
	char str1[] = "123";
	char str2[] = "12345";
	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
	printf("n: %d\n", n);
	printf("strncmp: %d\n", strncmp(str1, str2, n));
	printf("ft_strncmp: %d\n\n", ft_strncmp(str1, str2, n));

	char dst1[] = "";
	char src1[] = "abcd";
	char dst2[] = "";
	char src2[] = "abcd";
	size_t size = 15;
	printf("dst: %s\n", dst1);
	printf("src: %s\n", src1);
	printf("size: %zu\n", sizeof (dst1));
	printf("strlcpy: %zu\n", strlcpy(dst1, src1, size));
	printf("dst1: %s\n", dst1);
	printf("ft_strlcpy: %zu\n", ft_strlcpy(dst2, src2, size));
	printf("dst2: %s\n\n", dst2);

	return (0);
}
