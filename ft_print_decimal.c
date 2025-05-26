/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_decimal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurimaru <kurimaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 06:11:04 by ayayamad          #+#    #+#             */
/*   Updated: 2025/05/26 22:06:42 by kurimaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t	ft_put_signed_nbr(int c)
{
	size_t	len;

	len = 0;
	if (c < 0)
	{
		len += ft_put_char('-');
		c = -c;
	}
	if (c >= 10)
		len += ft_put_signed_nbr((c / 10));
	len = len + ft_put_char((c % 10) + '0');
	return (len);
}

size_t	ft_put_unsigned_nbr(unsigned int c)
{
	size_t	len;

	len = 0;
	if (c >= 10)
		len += ft_put_unsigned_nbr((c / 10));
	len += ft_put_char((c % 10) + '0');
	return (len);
}
