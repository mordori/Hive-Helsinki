/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 12:58:06 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/26 18:56:13 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Locates string [little] in string [big],
// where up to [len] bytes are searched.
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	start;
	size_t	i;

	start = 0;
	i = 0;
	if (!little[i])
		return ((char *)big);
	while (big[start])
	{
		i = 0;
		while (big[start + i] == little[i] && start + i < len)
			++i;
		if (!little[i])
			return ((char *)&big[start]);
		++start;
	}
	return (NULL);
}
