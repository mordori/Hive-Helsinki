/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_striteri.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 19:41:16 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/29 19:57:28 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

void	ft_upcase(unsigned int i, char *c)
{
	(void) i;
	*c = ft_toupper(*c);
}

void	ft_lowcase(unsigned int i, char *c)
{
	(void) i;
	*c = ft_tolower(*c);
}

int	main(void)
{
	char a[] = "abcdefg";
	printf("a: \t\t%s\n", a);
	ft_striteri(a, ft_upcase);
	printf("a: \t\t%s\n\n", a);

	char b[] = "ABCDEFG";
	printf("b: \t\t%s\n", b);
	ft_striteri(b, ft_lowcase);
	printf("b: \t\t%s\n", b);

	return (0);
}
