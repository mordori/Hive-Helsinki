/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 13:32:36 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/26 17:50:29 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Copies [n] bytes from [*src] to [*dest]. The memory areas may overlap.
// Returns a pointer to [*dest].
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = -1;
	if ((!dest || !src) && n > 0)
		return (NULL);
	if (src < dest)
	{
		i = n;
		while (i--)
			d[i] = s[i];
		return (dest);
	}
	while (++i < n)
		d[i] = s[i];
	return (dest);
}
