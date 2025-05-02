/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_tests.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 21:35:52 by myli-pen          #+#    #+#             */
/*   Updated: 2025/05/02 15:38:17 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_TESTS_H
# define LIBFT_TESTS_H

# include <bsd/string.h>
# include <stdio.h>
# include <ctype.h>
# include <string.h>
# include <assert.h>

# include "libft.h"
# define OK "\033[32m[OK]\033[0m"
# define KO "\033[31m[KO]\033[0m"

// Tests
# define CHARSET "aAo9!\a\0\200\xFF"

void print_str_chars(char *str, size_t n, char *msg);
void test_assert(int (*f1)(int c), int (*f2)(int c), int c);
void test_assert_str(const char *s1, const char *s2);
void test_mem_assert(void *p1, void *p2);
void print_c(int c);
void test_chrset(void (*f)());
void test_uchar_limits(void (*f)());
void test_null(void (*f)());
void test_all(void (*f)());

#endif
