/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:42:47 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/17 20:02:57 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <bsd/string.h>

#include "libft.h"

void print_str_chars(char *str, size_t i, char *msg)
{
	printf("%s", msg);
	while (i-- > 0)
	{
		if (!*str)
			printf("NUL ");
		else
			printf("%c ", *str);
		++str;
	}
	printf("\n");
}
void test_isalpha(int c)
{
	printf("\nc: \t\t%c\n", c);
	printf("isalpha: \t%d\n", isalpha(c));
	printf("ft_isalpha: \t%d\n\n", ft_isalpha(c));
}
void test_isdigit(int c)
{
	printf("c: \t\t%c\n", c);
	printf("isdigit: \t%d\n", isdigit(c));
	printf("ft_isdigit: \t%d\n\n", ft_isdigit(c));
}
void test_isalnum(int c)
{
	printf("c: \t\t%c\n", c);
	printf("isalnum: \t%d\n", isalnum(c));
	printf("ft_isalnum: \t%d\n\n", ft_isalnum(c));
}
void test_isascii(int c)
{
	printf("c: \t\t%c\n", c);
	printf("isascii: \t%d\n", isascii(c));
	printf("ft_isascii: \t%d\n\n", ft_isascii(c));
}
void test_isprint(int c)
{
	printf("c: \t\t%c\n", c);
	printf("isprint: \t%d\n", isprint(c));
	printf("ft_isprint: \t%d\n\n", ft_isprint(c));
}
void test_strlen(char *str)
{
	printf("str: \t\t%s\n", str);
	printf("strlen: \t%lu\n", strlen(str));
	printf("ft_strlen: \t%lu\n\n", ft_strlen(str));
}
void test_memset()
{
	char s1[] = "123456789";
	char s2[] = "123456789";
	int c = '#';
	size_t n = 3;
	printf("s: \t\t%s\n", s1);
	printf("c: \t\t%d\n", c);
	printf("n: \t\t%zu\n", n);
	printf("memset: \t%s\n", (char *) memset(s1, c, n));
	printf("ft_memset: \t%s\n\n", (char *) ft_memset(s2, c, n));
}
void test_bzero()
{
	char s3[] = "123456789";
	char s4[] = "123456789";
	size_t n = 2;
	printf("s: \t\t%s\n", s3);
	printf("n: \t\t%zu\n", n);
	bzero(s3, n);
	ft_bzero(s4, n);
	print_str_chars(s3, sizeof(s3), "bzero: \t\t");
	print_str_chars(s4, sizeof(s4), "ft_bzero: \t");
	printf("\n");
}
void test_memcpy()
{
	char s5[] = "123456789";
	char s6[] = "abcd";
	char s7[] = "123456789";
	char s8[] = "abcd";
	size_t n = 3;
	printf("s: \t\t%s\n", s5);
	printf("s: \t\t%s\n", s6);
	printf("n: \t\t%zu\n", n);
	memcpy(s5, s6, n);
	ft_memcpy(s7, s8, n);
	print_str_chars(s5, sizeof(s5), "memcpy: \t");
	print_str_chars(s7, sizeof(s7), "ft_memcpy: \t");
	printf("\n");
}

void test_toupper(int c)
{
	printf("c: \t\t%c\n", c);
	printf("toupper: \t%c\n", toupper(c));
	printf("ft_toupper: \t%c\n\n", ft_toupper(c));
}
void test_tolower(int c)
{
	printf("c: \t\t%c\n", c);
	printf("tolower: \t%c\n", tolower(c));
	printf("ft_tolower: \t%c\n\n", ft_tolower(c));
}
void test_strchr(int c)
{
	char str[] = "Hello, World!";
	printf("str: \t\t%s\n", str);
	printf("c: \t\t%c\n", c);
	printf("strchr: \t%s\n", strchr(str, c));
	printf("ft_strchr: \t%s\n\n", ft_strchr(str, c));
}
void test_strrchr(int c)
{
	char str[] = "Hello, World!";
	printf("str: \t\t%s\n", str);
	printf("c: \t\t%c\n", c);
	printf("strrchr: \t%s\n", strrchr(str, c));
	printf("ft_strrchr: \t%s\n\n", ft_strrchr(str, c));
}
void test_strncmp()
{
	size_t n = 4;
	char str1[] = "abc";
	char str2[] = "abcdef";
	printf("str1: \t\t%s\n", str1);
	printf("str2: \t\t%s\n", str2);
	printf("n: \t\t%zu\n", n);
	printf("strncmp: \t%d\n", strncmp(str1, str2, n));
	printf("ft_strncmp: \t%d\n\n", ft_strncmp(str1, str2, n));
}
void test_strlcpy()
{
	char dst1[] = "ab";
	char src1[] = "1234";
	char dst2[] = "ab";
	char src2[] = "1234";
	size_t size = 5;
	printf("dst: \t\t%s\n", dst1);
	printf("src: \t\t%s\n", src1);
	printf("size: \t\t%zu\n", sizeof (dst1));
	printf("strlcpy: \t%zu\n", strlcpy(dst1, src1, size));
	printf("dst1: \t\t%s\n", dst1);
	printf("ft_strlcpy: \t%zu\n", ft_strlcpy(dst2, src2, size));
	printf("dst2: \t\t%s\n\n", dst2);
}

int	main(void)
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

	return (0);
}
