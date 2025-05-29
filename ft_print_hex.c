/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayayamad <ayayamad@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 06:11:24 by ayayamad          #+#    #+#             */
/*   Updated: 2025/05/28 14:04:19 by ayayamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_put_nbr_hex(unsigned int c, int is_upper)
{
	unsigned int	digit;
	unsigned int	hex_int;
	size_t			count;

	count = 0;
	if (c >= 16)
		count += ft_put_nbr_hex((c / 16), is_upper);
	digit = c % 16;
	if (digit < 10)
		hex_int = digit + '0';
	else if (is_upper)
		hex_int = digit - 10 + 'A';
	else
		hex_int = digit - 10 + 'a';
	count += ft_put_char(hex_int);
	return (count);
}
