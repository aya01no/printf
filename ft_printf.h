/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayayamad <ayayamad@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 05:40:23 by ayayamad          #+#    #+#             */
/*   Updated: 2025/05/28 14:04:07 by ayayamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdint.h>
# include <limits.h>

int	ft_put_char(int c);
int	ft_put_str(char *s);
int	ft_put_signed_nbr(int c);
int	ft_put_unsigned_nbr(unsigned int c);
int	ft_put_nbr_hex(unsigned int c, int is_upper);
int	ft_put_ptr(void *c);
int	ft_printf(const char *s, ...);
#endif
