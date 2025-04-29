/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 21:37:39 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/29 13:12:26 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *
 * @param s Source string.
 * @return New string duplicated from `s`.
 */
char	*ft_strdup(const char *s)
{
	return (ft_substr(s, 0, ft_strlen(s)));
}
