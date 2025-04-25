/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_tests.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 21:39:15 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/25 22:41:35 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void print_str_chars(char *str, size_t n, char *msg)
{
	printf("%s", msg);
	if (n >= 100)
	{
		printf("String is too long! Possible segfault! Abort! Abort!");
		printf("\n");
		return ;
	}
	while (n > 0 && n < 100)
	{
		if (!*str)
			printf("\\0");
		else
			printf("%c", *str);
		++str;
		--n;
	}
	printf("\n");
}

void test_assert(int (*f1)(int c), int (*f2)(int c), int c)
{
	assert(f1(c) == f2(c));
	printf("assert "OK"\n\n");
}

void test_assert_str(const char *s1, const char *s2)
{
	if (!s1 && !s2)
	{
		printf("assert "OK"\n\n");
		return ;
	}
	if (!s1 || !s2)
	{
		printf("assert "KO", (NULL)\n\n");
		return ;
	}
	size_t n = sizeof(s1);
	while (n > 0)
	{
		assert(*s1 == *s2);
		--n;
	}
	//assert(!strcmp(s1, s2));
	printf("assert "OK"\n\n");
}

void test_mem_assert(void *p1, void *p2)
{
	if (!p1 && !p2)
	{
		printf("memcmp "OK", ");
		return ;
	}
	if (!p1 || !p2)
	{
		printf("memcmp "KO" (NULL), ");
		return ;
	}
	if (memcmp(p1, p2, 1) == 0)
		printf("memcmp "OK", ");
	else
		printf("memcmp "KO", ");
}

void print_c(int c)
{
	c = (unsigned char)c;
	if (isprint(c))
		printf("c: \t\t%c\n", c);
	else if (isascii(c))
		printf("c: \t\tnot printable (%d)\n", c);
	else
		printf("c: \t\t%d (int)\n", c);
}

void test_chrset(void (*f)())
{
	printf("\033[35mCHARSET\033[0m\n");
	char	chrset[] = CHARSET;
	unsigned long i = 0;
	size_t n = sizeof(chrset);
	while (i < n - 1)
	{
		f(chrset[i]);
		i++;
	}
}

void test_uchar_limits(void (*f)())
{
	printf("\033[35m(U)CHAR LIMITS\033[0m\n");
	f(EOF);
	f(127);
	f(255);
}

void test_null(void (*f)())
{
	printf("\033[35mNULL\033[0m\n");
	f(NULL);
}

// void test_strings(void (f*)())
// {
// 	char	*strs[] = STRINGS;
// 	unsigned long i = 0;
// 	while (i < strlen(chrset))
// 	{
// 		f(strs[i]);
// 		i++;
// 	}
// }

void test_all(void (*f)())
{
	test_chrset(f);
	test_uchar_limits(f);
	test_null(f);
}
