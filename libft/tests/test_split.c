/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_split.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:08:07 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/27 21:38:21 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void print_result(char **words)
{
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
	char	*str = "Hello,!42,Piscine!and,Goodbye";
    print_result(ft_split(str, '!'));
    //print_result(ft_split(" Apple Orange Banana", ' '));
    //print_result(ft_split("   One  Two Three  ", ' '));
    //print_result(ft_split("", ' '));
	printf("%s\n", str);
    return (0);
}
