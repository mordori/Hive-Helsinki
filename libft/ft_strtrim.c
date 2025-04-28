/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 20:43:13 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/28 13:55:10 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Allocates memory and returns a copy of string `s1` with characters from
 * string `set` removed from the beginning and the end.
 *
 * @param s1 Source string.
 * @param set Set of characters to be trimmed.
 * @return New substring from `s1` trimmed with `set`.
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	while (ft_strrchr(set, s1[len - 1]) && len > 0)
		--len;
	while (ft_strchr(set, *s1++) && len > 0)
		--len;
	return (ft_substr(--s1, 0, len));
}
