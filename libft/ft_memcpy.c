/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 12:11:53 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/26 17:59:11 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Copies [n] bytes from [*src] to [*dest]. The memory areas must not overlap.
// Returns a pointer to [*dest].
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char *s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if ((!dest || !src) && n > 0)
		return (NULL);
	while (n--)
		*d++ = *s++;
	return (dest);
}
