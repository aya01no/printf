/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurimaru <kurimaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 05:40:23 by ayayamad          #+#    #+#             */
/*   Updated: 2025/05/26 22:08:52 by kurimaru         ###   ########.fr       */
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
