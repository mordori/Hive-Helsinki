/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 18:36:03 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/29 22:51:24 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Converts lowercase alphabet character `a-z` to uppercase.
 *
 * `\xFF` hex returns signed `-1` in libc toupper.
 *
 * @param c Character to be converted.
 * @return `A-Z`, otherwise `c`. Exception for \xFF.
 */
int	ft_toupper(int c)
{
	if (c == '\xFF')
		return (c);
	c = (unsigned char)c;
	if (c >= 'a' && c <= 'z')
		c -= 'a' - 'A';
	return (c);
}
