/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 18:40:50 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/29 22:53:03 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Converts uppercase alphabet character `A-Z` to lowercase.
 *
 * `\xFF` hex returns signed `-1` in libc toupper.
 *
 * @param c Character to be converted.
 * @return `a-z`, otherwise `c`. Exception for \xFF.
 */
int	ft_tolower(int c)
{
	if (c == '\xFF')
		return (c);
	c = (unsigned char)c;
	if (c >= 'A' && c <= 'Z')
		c += 'a' - 'A';
	return (c);
}
