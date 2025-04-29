/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 20:45:37 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/29 22:17:57 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Outputs character `c` to the specified file descriptor.
 *
 * @param c Character to output.
 * @param fd File descriptor.
 */
void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
