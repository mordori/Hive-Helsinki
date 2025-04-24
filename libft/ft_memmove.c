/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 13:32:36 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/24 15:39:45 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	if (!dest && !src)
		return (NULL);
	if (src < dest)
	{
		i = n;
		while (i--)
		{
			d[i] = s[i];
		}
	}
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			++i;
		}
	}
	return (dest);
}
