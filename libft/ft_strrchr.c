/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 11:10:27 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/16 11:28:40 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	pos;

	i = 0;
	pos = -1;
	while (s[i])
	{
		if (s[i] == c)
			pos = i;
		++i;
	}
	if (pos != -1)
		return ((char *) &s[pos]);
	if (s[i] == c)
		return ((char *) &s[i]);
	return (NULL);
}
