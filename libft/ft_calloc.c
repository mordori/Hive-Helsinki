/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 20:01:53 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/25 21:16:05 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*arr;

	if (size && nmemb > SIZE_MAX / size)
		return (NULL);
	arr = malloc(nmemb * size);
	if (!arr)
		return (NULL);
	ft_memset(arr, 0, nmemb * size);
	return (arr);
}
