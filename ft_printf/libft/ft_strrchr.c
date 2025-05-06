/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 11:10:27 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/29 22:49:16 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Attempts to find the last occurrance of character `c` in `s`.
 *
 * @param s Source string.
 * @param c Character to be searched for.
 * @return Pointer to the last occurrence of character `c` in `s`,
 * or `NULL` if not found.
 */
char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	c = (unsigned char)c;
	if (!s)
		return (NULL);
	i = ft_strlen(s);
	while (i > 0)
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		--i;
	}
	if (s[i] == c)
		return ((char *)&s[i]);
	return (NULL);
}
