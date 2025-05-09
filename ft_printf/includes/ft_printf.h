/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 17:08:49 by myli-pen          #+#    #+#             */
/*   Updated: 2025/05/09 19:49:23 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>

# define BASE10 "0123456789"
# define BASE16 "0123456789ABCDEF"

int		ft_printf(const char *str, ...);
char	*ft_uitoa(uintptr_t n, const char *base);
char	*ft_ptrstr(char *s);

#endif
