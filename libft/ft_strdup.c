/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 21:37:39 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/27 16:27:58 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Allocates memory and returns a new string duplicated from string [*s].
char	*ft_strdup(const char *s)
{
	size_t	len;

	len = ft_strlen(s);
	return (ft_substr(s, 0, len));
}
