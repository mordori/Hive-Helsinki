/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 12:19:27 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/16 13:54:54 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	if (size == 1)
	{
		dst[0] = 0;
		return (ft_strlen(src));
	}
	while (i < size - 1 && src[i])
	{
		dst[i] = src[i];
		++i;
	}
	dst[i] = 0;
	return (ft_strlen(src));
}
