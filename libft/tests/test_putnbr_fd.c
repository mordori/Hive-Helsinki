/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 19:41:16 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/29 19:57:28 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_tests.h"

int	main(void)
{
	ft_putnbr_fd(123, 1);
	printf("\n");
	ft_putnbr_fd(1000, 1);
	printf("\n");
	ft_putnbr_fd(-3562, 2);
	printf("\n");
	ft_putnbr_fd(0, 0);
	printf("\n");
	ft_putnbr_fd(INT_MAX, 0);
	printf("\n");
	ft_putnbr_fd(INT_MIN, 0);
	printf("\n");

	return (0);
}
