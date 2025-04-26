/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 18:40:50 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/26 19:21:47 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Converts uppercase alphabet char to lowercase.
// \xFF hex value has an edge case in libc toupper where it returns signed -1.
int	ft_tolower(int c)
{
	if (c == '\xFF')
		return (c);
	c = (unsigned char)c;
	if (c >= 'A' && c <= 'Z')
		c += 'a' - 'A';
	return (c);
}
