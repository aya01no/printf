/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayayamad <ayayamad@student.42tokyo.jp>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-24 05:40:23 by ayayamad          #+#    #+#             */
/*   Updated: 2025-05-24 05:40:23 by ayayamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdint.h>

size_t	ft_put_char(int c, int *count);
size_t	ft_put_str(char *s, int *count);
size_t	ft_put_signed_nbr(int c, int *count);
size_t	ft_put_unsigned_nbr(unsigned int c, int *count);
size_t	ft_put_nbr_hex(unsigned int c, int *count, int is_upper);
size_t	ft_put_percent(unsigned int c, int *count);
size_t	ft_print_ptr(int c, int *count);
#endif
