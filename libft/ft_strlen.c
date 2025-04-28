/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:58:00 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/28 12:54:15 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// TODO: Print error for `NULL` when allowed.
/**
 *
 * @param s Source string.
 * @return The length of the string `s`.
 */
size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	if (s)
		while (*s++)
			++len;
	return (len);
}
