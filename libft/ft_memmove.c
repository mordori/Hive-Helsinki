/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 13:32:36 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/23 22:32:53 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	copy[ft_strlen(src) + 1];


	if (!dest && !src)
		return (NULL);

	return (dest);
}

// void	*ft_memmove(void *target, const void *source, size_t length)
// {
// 	size_t				index;
// 	unsigned char		*target_bytes;
// 	const unsigned char	*source_bytes;

// 	target_bytes = (unsigned char *) target;
// 	source_bytes = (const unsigned char *) source;
// 	if (source_bytes < target_bytes)
// 	{
// 		index = length;
// 		while (index > 0)
// 		{
// 			index--;
// 			target_bytes[index] = source_bytes[index];
// 		}
// 	}
// 	else
// 	{
// 		index = 0;
// 		while (index < length)
// 		{
// 			target_bytes[index] = source_bytes[index];
// 			index++;
// 		}
// 	}
// 	return (target);
// }
