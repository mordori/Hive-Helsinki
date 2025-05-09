/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 20:45:37 by myli-pen          #+#    #+#             */
/*   Updated: 2025/05/09 20:05:04 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Outputs character `c` to the specified file descriptor.
 *
 * @param c Character to output.
 * @param fd File descriptor.
 * @return Number of characters written, or -1 on error.
 */
int	ft_putchar_fd(char c, int fd)
{
	return (write (fd, &c, 1));
}
