/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:08:07 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/22 20:47:53 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void test_atoi(char *nptr)
{
	printf("nptr: \t\t\"%s\"\n", nptr);
	int orig = atoi(nptr);
	int ft = ft_atoi(nptr);
	printf("atoi: \t\t%d\n", orig);
	printf("ft_atoi: \t%d\n", ft);
	assert(orig == ft);
	printf("assert "OK"\n\n");
}

int	main(int argc, char *argv[])
{
	test_atoi("+123");
	test_atoi("12+3");
	test_atoi("12s3");
	test_atoi("\67octal");
	test_atoi("\x32hex");
	test_atoi("+ - -123    ");
	test_atoi("+-123    ");
	test_atoi("-123    ");
	test_atoi("  -123    ");
	test_atoi("  --123    ");
	test_atoi("  \t  123");
	test_atoi("2147483647");
	test_atoi("-2147483648");
	if(argc == 2)
	{
		printf("\033[35mPROGRAM ARGUMENTS\033[0m\n");
		test_atoi(argv[1]);
	}
	return (0);
}

// int    main(void)
// {
//     printf("negative number\n");
//     printf("ft_atoi = %d\t", ft_atoi("-1234ab576"));
//     printf("atoi = %d\n\n", atoi("-1234ab576"));

//     printf("zero\n");
//     printf("ft_atoi = %d\t", ft_atoi("0"));
//     printf("atoi = %d\n\n", atoi("0"));

//     printf("INT_MIN\n");
//     printf("ft_atoi = %d\t", ft_atoi("-2147483648"));
//     printf("atoi = %d\n\n", atoi("-2147483648"));

//     printf("INT_MAX\n");
//     printf("ft_atoi = %d\t", ft_atoi("2147483647"));
//     printf("atoi = %d\n\n", atoi("2147483647"));

//     printf("LLONG_MAX\n");
//     printf("ft_atoi = %d\t", ft_atoi("9223372036854775807"));
//     printf("atoi = %d\n\n", atoi("9223372036854775807"));

//     printf("LLONG_MIN\n");
//     printf("ft_atoi = %d\t", ft_atoi("-9223372036854775808"));
//     printf("atoi = %d\n\n", atoi("-9223372036854775808"));

//     printf("ABOVE LLONG_MAX\n");
//     printf("ft_atoi = %d\t", ft_atoi("9223372036854775818"));
//     printf("atoi = %d\n\n", atoi("9223372036854775818"));
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
//         printf("atoi: %i\n", atoi(str));
//         printf("ft_atoi: %i\n\n", ft_atoi(str));
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
