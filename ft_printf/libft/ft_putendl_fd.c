/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 21:07:01 by myli-pen          #+#    #+#             */
/*   Updated: 2025/05/09 20:09:25 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Outputs string `s` to the specified file descriptor followed by a newline.
 *
 * @param s Source string.
 * @param fd File descriptor.
 * @return Number of characters written, or -1 on error.
 */
int	ft_putendl_fd(char *s, int fd)
{
	int	len;

	if (!s)
		return (-1);
	len = ft_putstr_fd(s, fd);
	if (len == -1)
		return (-1);
	if (write (fd, "\n", 1) == -1)
		return (-1);
	return (len + 1);
}
