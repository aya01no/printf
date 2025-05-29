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

size_t	ft_put_ptr(void *c)
{
	uintptr_t	ptr_c;
	int			is_upper;
	size_t		count;

	ptr_c = (uintptr_t)c;
	count = 0;
	count += ft_put_str("0x");
	is_upper = 0;
	count += ft_put_nbr_hex(ptr_c, is_upper);
	return (count);
}
