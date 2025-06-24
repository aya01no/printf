/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayayamad <ayayamad@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 06:12:03 by ayayamad          #+#    #+#             */
/*   Updated: 2025/05/28 14:04:15 by ayayamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_put_nbr_hex_uintptr(uintptr_t c)
{
	uintptr_t	digit;
	char		hex_char;
	int			count;

	count = 0;
	if (c >= 16)
		count += ft_put_nbr_hex_uintptr((c / 16));
	digit = c % 16;
	if (digit < 10)
		hex_char = digit + '0';
	else
		hex_char = digit - 10 + 'a';
	count += ft_put_char(hex_char);
	return (count);
}

int	ft_put_ptr(void *c)
{
	uintptr_t	ptr_c;
	int			count;

	if (c == NULL)
		return (ft_put_str("(nil)"));
	ptr_c = (uintptr_t)c;
	count = 0;
	count += ft_put_str("0x");
	count += ft_put_nbr_hex_uintptr(ptr_c);
	return (count);
}
