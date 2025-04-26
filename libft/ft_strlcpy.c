/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 12:19:27 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/26 18:35:48 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Copies up to [size] - 1 bytes from the string [*src] to the string [*dst].
// Returns the total length of the string attempted to create.
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;

	len = ft_strlen(src);
	if (size == 0)
		return (len);
	if (size == 1)
	{
		*dst = 0;
		return (len);
	}
	while (size-- > 1 && *src)
		*dst++ = *src++;
	*dst = 0;
	return (len);
}
