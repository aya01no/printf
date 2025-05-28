/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayayamad <ayayamad@student.42tokyo.jp>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-28 05:00:14 by ayayamad          #+#    #+#             */
/*   Updated: 2025-05-28 05:00:14 by ayayamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdint.h>

size_t	ft_put_char(int c);
size_t	ft_put_str(char *s);
size_t	ft_put_signed_nbr(int c);
size_t	ft_put_unsigned_nbr(unsigned int c);
size_t	ft_put_nbr_hex(unsigned int c, int is_upper);
size_t	ft_put_percent(unsigned int c);
size_t	ft_print_ptr(int c);
#endif
