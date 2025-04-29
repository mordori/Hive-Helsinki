/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 18:22:39 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/28 14:41:41 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Checks if `c` is a printable character in the standard ASCII character set.
 *
 * @param c Character to be checked for.
 * @return `16384` if the check is true, `0` if false.
 */
int	ft_isprint(int c)
{
	c = (unsigned char)c;
	if (c >= ' ' && c <= '~')
		return (16384);
	return (0);
}
