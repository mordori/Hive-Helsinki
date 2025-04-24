/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 18:49:44 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/24 17:54:19 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	c = (unsigned char)c;
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
