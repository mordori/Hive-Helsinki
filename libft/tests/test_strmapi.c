/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strmapi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 19:41:16 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/29 19:57:28 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

char	ft_upcase(unsigned int i, char c)
{
	(void) i;
	return (ft_toupper(c));
}

char	ft_lowcase(unsigned int i, char c)
{
	(void) i;
	return (ft_tolower(c));
}

int	main(void)
{
	char *a = "abcdefg";
	char *b;
	printf("a: \t\t%s\n", a);
	a = ft_strmapi(a, ft_upcase);
	printf("a->A: \t\t%s\n\n", a);
	b = ft_strmapi(a, ft_lowcase);
	printf("A->b: \t\t%s\n", b);
	free(a);
	free(b);

	return (0);
}
