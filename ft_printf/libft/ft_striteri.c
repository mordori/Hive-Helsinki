/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 20:20:54 by myli-pen          #+#    #+#             */
/*   Updated: 2025/05/09 20:38:09 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Applies function `f` to each character of string `s`.
 *
 * @param s Source string
 * @param f Fuction pointer
 */
int	ft_striteri(char *s, int (*f)(char*))
{
	unsigned int	i;

	if (!s || !f)
		return (-1);
	i = -1;
	while (s[++i])
		f(&s[i]);
	return (1);
}
