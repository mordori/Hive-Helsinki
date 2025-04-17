/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 13:32:36 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/17 18:53:09 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	str[50];

	ft_memcpy(str, src, 8);
	printf("ASDSadASD      %s\n", str);
	while (n-- > 0)
	{

	}
	return (dest);
}
