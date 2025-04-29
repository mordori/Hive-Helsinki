/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putstr_fd.c                                     :+:      :+:    :+:   */
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
	ft_putstr_fd("1234", 1);
	printf("\n");
	ft_putstr_fd("abcdef", 2);
	printf("\n");
	ft_putstr_fd("------", 0);
	printf("\n");

	return (0);
}
