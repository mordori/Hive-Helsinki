/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 20:08:44 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/27 20:31:34 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Allocates memory and returns a new string, which is the result of
// concatenating [*s1] and [*s2].
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len1;
	size_t	len2;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (!s1 || !s2)
		return (NULL);
	str = ft_calloc(len1 + len2 + 1, sizeof (char));
	if (!str)
		return (NULL);
	ft_memcpy(str, s1, len1);
	ft_memcpy(&str[len1], s2, len2);
	return (str);
}
