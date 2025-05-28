/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayayamad <ayayamad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 06:11:24 by ayayamad          #+#    #+#             */
/*   Updated: 2025/05/26 22:07:18 by ayayamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t	ft_put_nbr_hex(unsigned int c, size_t len, int is_upper)
{
	int		digit;
	int		hex_int;
	size_t	len;

	len = 0;
	if (c >= 16)
		len += ft_put_nbr_hex((c / 16), is_upper);

	digit = c % 16;
	if (digit < 10)
		hex_int = digit + '0';
	else if (is_upper)
			hex_int = digit - 10 + 'A';
		else
			hex_int = digit - 10 + 'a';
	len += ft_put_char(hex_int);
	return (len);
}
