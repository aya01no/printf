/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayayamad <ayayamad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 06:12:03 by ayayamad          #+#    #+#             */
/*   Updated: 2025/05/26 22:07:52 by ayayamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t	ft_put_ptr(void *c)
{
	uintptr_t	ptr_c;
	int			is_upper;
	size_t		len;

	ptr_c = (uintptr_t)c;
	len = 0;
	len += ft_put_str("0x");
	is_upper = 0;
	len += ft_put_nbr_hex(ptr_c, is_upper);
	return (len);
}
