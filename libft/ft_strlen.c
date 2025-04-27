/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:58:00 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/27 16:08:39 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Calculates and returns the length of a string [*s].
// TODO: Print error for (null) when allowed.
size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	if (s)
		while (*s++)
			++len;
	return (len);
}
