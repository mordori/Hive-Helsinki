/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 18:51:45 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/28 14:10:06 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Fills `n` bytes of the memory area `s` with byte `c`.
 *
 * @param s Source memory area.
 * @param c Byte to be written with.
 * @param n Number of bytes to be written.
 * @return Pointer to modified `s`.
 */
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*d;

	d = (unsigned char *)s;
	if (!s && n)
		return (NULL);
	while (n--)
		*d++ = (unsigned char)c;
	return (s);
}
