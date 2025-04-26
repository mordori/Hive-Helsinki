/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 11:10:27 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/26 19:22:21 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Returns a pointer to the last occurrence of byte [c] in string [*s]
// or (NULL) if not found.
char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	c = (unsigned char)c;
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
