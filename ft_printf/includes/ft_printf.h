/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 17:08:49 by myli-pen          #+#    #+#             */
/*   Updated: 2025/05/08 22:30:21 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>

# define BASE2 "01"
# define BASE8 "01234567"
# define BASE10 "0123456789"
# define BASE16 "0123456789ABCDEF"
# define BASE16LOW "0123456789abcdef"

int	ft_printf(const char *str, ...);

#endif
