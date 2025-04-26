/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 11:34:04 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/26 18:49:58 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Compares [n] bytes of the strings [*s1] and [*s2].
// Returns an (int) value from the comparison.
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if ((!s1 && !s2) || !n)
		return (0);
	while (*s1 == *s2 && *s1 && *s2 && n > 1)
	{
		++s1;
		++s2;
		--n;
	}
	return ((const unsigned char)*s1 - (const unsigned char)*s2);
}
