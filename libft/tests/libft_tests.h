/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_tests.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 21:35:52 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/18 22:00:29 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_TESTS_H
# define LIBFT_TESTS_H

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <bsd/string.h>
#include <assert.h>
#include "libft.h"
// #include <dirent.h>
#include <limits.h>
#define OK "\033[32m[OK]\033[0m"
#define KO "\033[31m[KO]\033[0m"

void print_str_chars(char *str, size_t i, char *msg);
void test_assert(int (*f1)(int c), int (*f2)(int c), int c);
void test_assert_str(const char *s1, const char *s2, size_t size);
void test_mem_assert(void *p1, void *p2);
void print_c(int c);
void test_chrset(void (*f)(int c));
void test_uchar_limits(void (*f)(int c));

void test_isalpha(int c);
void test_bzero();
void test_isalnum(int c);
void test_isascii(int c);
void test_isdigit(int c);
void test_isprint(int c);
void test_memcpy();
void test_memset();
void test_strchr(int c);
void test_strlcpy();
void test_strlen(char *str);
void test_strncmp();
void test_strrchr(int c);
void test_tolower(int c);
void test_toupper(int c);

#endif
