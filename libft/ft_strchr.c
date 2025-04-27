/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 18:49:44 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/27 21:53:10 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Returns a pointer to the first occurrence of byte [c] in string [*s]
// or NULL if not found.
char	*ft_strchr(const char *s, int c)
{
	c = (unsigned char)c;
	if (!s)
		return (NULL);
	while (*s)
	{
		if ((const unsigned char)*s == c)
			return ((char *)s);
		++s;
	}
	if ((const unsigned char)*s == c)
		return ((char *)s);
	return (NULL);
}
