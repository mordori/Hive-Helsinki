/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 21:27:56 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/27 21:55:09 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Searches [n] bytes of the memory area [*s] for byte [c].
// Returns a pointer to the matching byte or NULL if not found.
void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char		*d;

	d = (const unsigned char *)s;
	c = (unsigned char)c;
	if (!s)
		return (NULL);
	while (n--)
	{
		if (*d == c)
			return ((void *)d);
		++d;
	}
	return (NULL);
}
