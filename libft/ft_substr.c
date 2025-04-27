/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 21:26:33 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/27 16:04:10 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Allocates memory and returns a substring from the string [*s].
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s) > start)
		while (s[start + i] && i < len)
			++i;
	sub = ft_calloc(sizeof (char), (i + 1));
	if (sub && i)
		ft_memcpy(sub, &s[start], i);
	return (sub);
}
