/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 11:34:04 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/22 23:08:27 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (*s1 == *s2 && *s1 && *s2 && i < n)
	{
		++s1;
		++s2;
		++i;
	}
	return (*s1 - *s2);
}

// #include "libft.h"

// // static int sign(int x)
// // {
// // 	return (x > 0) - (x < 0);
// // }

// int	ft_strncmp(const char *ac, const char *bc, size_t limit)
// {
// 	size_t				index;
// 	const unsigned char	*a;
// 	const unsigned char	*b;

// 	index = 0;
// 	a = (const unsigned char *) ac;
// 	b = (const unsigned char *) bc;
// 	while ((a[index] != '\0' || b[index] != '\0') && index < limit)
// 	{
// 		if (a[index] != b[index])
// 			return (((a[index] > b[index]) - (a[index] < b[index])));
// 		index++;
// 	}
// 	return (0);
// }
