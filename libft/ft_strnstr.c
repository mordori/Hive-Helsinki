/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 12:58:06 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/25 14:43:40 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!*little)
		return ((char *)big);
	if (!len)
		return (NULL);
	while (big[i])
	{
		j = 0;
		if (little[j] == big[i])
		{
			while (little[j] && i + j < len && big[i + j])
			{
				if (little[j] != big[i + j])
					break ;
				++j;
			}
			if (!little[j])
				return ((char *)big + i);
		}
		++i;
	}
	return (NULL);
}
