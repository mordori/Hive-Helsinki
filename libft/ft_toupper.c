/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 18:36:03 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/27 16:04:54 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Converts lowercase alphabet char to uppercase.
// \xFF hex value returns signed -1 in libc toupper.
int	ft_toupper(int c)
{
	if (c == '\xFF')
		return (c);
	c = (unsigned char)c;
	if (c >= 'a' && c <= 'z')
		c -= 'a' - 'A';
	return (c);
}
