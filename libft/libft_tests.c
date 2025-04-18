/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_tests.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 21:39:15 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/18 21:55:09 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void print_str_chars(char *str, size_t i, char *msg)
{
	printf("%s", msg);
	while (i-- > 0)
	{
		if (!*str)
			printf("[NUL]");
		else
			printf("%c", *str);
		++str;
	}
	printf("\n");
}

void test_assert(int (*f1)(int c), int (*f2)(int c), int c)
{
	assert(f1(c) == f2(c));
	printf("-------"OK"-------\n\n\n");
}

void test_assert_str(const char *s1, const char *s2, size_t size)
{
	while (size-- > 0)
	{
		assert(*s1 == *s2);
	}
	printf("-------"OK"-------\n\n\n");
}

// void test_mem_assert(char *(*f1)(const char *s, int c), char *(*f2)(const char *s, int c),
// 					char *s, int c)
// {
// 	if (memcmp(f1(s, c), f2(s, c), 1) == 0)
// 		printf(OK " mem assertation passed!\n\n");
// 	else
// 		printf(KO " mem assertation failed!\n\n");
// }

void test_mem_assert(void *p1, void *p2)
{
	if (memcmp(p1, p2, 1) == 0)
		printf("-------"OK"-------\n\n\n");
	else
		printf("-------"KO"-------\n\n\n");
}

void print_c(int c)
{
	if (isprint(c))
		printf("c: \t\t%c\n", c);
	else if (isascii(c))
		printf("c: \t\tnot printable (%d)\n", c);
	else
		printf("c: \t\t%d (int)\n", c);
}

void test_chrset(void (*f)(int c))
{
	char	chrset[] = "aA9!\t";
	unsigned long i = 0;
	while (i < strlen(chrset))
	{
		f(chrset[i]);
		i++;
	}
}

void test_uchar_limits(void (*f)(int c))
{
	f(EOF);
	f(255);
}
