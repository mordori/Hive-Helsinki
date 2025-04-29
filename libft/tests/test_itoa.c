/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_itoa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:08:07 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/22 20:47:53 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void test_itoa(int n)
{
	printf("n: \t\t%d\n", n);
	//char *orig = itoa(n);
	char *ft = ft_itoa(n);
	//printf("itoa: \t\t%s\n", orig);
	printf("ft_itoa: \t%s\n\n", ft);
	//assert(orig == ft);
	//printf("assert "OK"\n\n");
	free(ft);
}

int	main(void)
{
	test_itoa(123);
	test_itoa(-654);
	test_itoa(0);
	test_itoa(INT_MAX);
	test_itoa(INT_MIN);
	return (0);
}

// int    main(void)
// {
//     printf("negative number\n");
//     printf("ft_itoa = %d\t", ft_itoa("-1234ab576"));
//     printf("itoa = %d\n\n", itoa("-1234ab576"));

//     printf("zero\n");
//     printf("ft_itoa = %d\t", ft_itoa("0"));
//     printf("itoa = %d\n\n", itoa("0"));

//     printf("INT_MIN\n");
//     printf("ft_itoa = %d\t", ft_itoa("-2147483648"));
//     printf("itoa = %d\n\n", itoa("-2147483648"));

//     printf("INT_MAX\n");
//     printf("ft_itoa = %d\t", ft_itoa("2147483647"));
//     printf("itoa = %d\n\n", itoa("2147483647"));

//     printf("LLONG_MAX\n");
//     printf("ft_itoa = %d\t", ft_itoa("9223372036854775807"));
//     printf("itoa = %d\n\n", itoa("9223372036854775807"));

//     printf("LLONG_MIN\n");
//     printf("ft_itoa = %d\t", ft_itoa("-9223372036854775808"));
//     printf("itoa = %d\n\n", itoa("-9223372036854775808"));

//     printf("ABOVE LLONG_MAX\n");
//     printf("ft_itoa = %d\t", ft_itoa("9223372036854775818"));
//     printf("itoa = %d\n\n", itoa("9223372036854775818"));
// }

//  int main(void)
// {
//     char s[] = "-21474836481111111111111111111111111111111111";
//     char *str;

//     int i = 2;
//     while (i < 40)
//     {
//         str = malloc(i + 1);
//         memcpy(str, s, i);
//         str[i] = 0;
//         printf("str: %s\n", str);
//         printf("itoa: %i\n", itoa(str));
//         printf("ft_itoa: %i\n\n", ft_itoa(str));
//         free(str);
//         i++;
//     }
// }

// if (number > (INT_MAX - (*nptr - '0')) / 10)
// {
//     if (sign == 1)
//         return (INT_MAX);
//     return (INT_MIN);
// }
