/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 12:11:53 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/18 17:09:40 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*char_ptr;

	char_ptr = (unsigned char *) dest;
	//if ()
	while (n-- >0)
	{
		*char_ptr++ = *(unsigned char *)src++;
	}

	return (dest);
}
