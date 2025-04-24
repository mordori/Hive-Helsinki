/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 11:34:04 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/24 17:42:16 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (!n)
		return (0);
	while ((const unsigned char)*s1 == (const unsigned char)*s2
		&& *s1 && *s2 && n--)
	{
		if (n)
		{
			++s1;
			++s2;
		}
	}
	return ((const unsigned char)*s1 - (const unsigned char)*s2);
}
