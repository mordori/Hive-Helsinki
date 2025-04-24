/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 15:47:55 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/24 16:43:10 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char *str2;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	if ((!s1 && !s2) || !n)
		return (0);
	while (*str1 == *str2 && n--)
	{
		if (n)
		{
			++str1;
			++str2;
		}
	}
	return (*str1 - *str2);
}
