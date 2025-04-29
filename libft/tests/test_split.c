/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 19:57:32 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/29 13:37:38 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void	print_result(char **words)
{
	if (!words)
	{
		printf("Error, trying to print NULL\n");
		return ;
	}
	int i = 0;
	while (words[i])
	{
		printf("%s\n", words[i]);
		free(words[i]);
		i++;
	}
	printf("----------\n");
	free(words);
}

int main(void)
{
	print_result(ft_split("Hello,42,Piscine,and,goodbye,!", ','));
	print_result(ft_split("  Apple Orange  Banana", ' '));
	print_result(ft_split("---One--Two-Three--", '-'));
	print_result(ft_split("----", '-'));
	print_result(ft_split("", ' '));
	return (0);
}
