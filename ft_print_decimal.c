/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_decimal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayayamad <ayayamad@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 06:11:04 by ayayamad          #+#    #+#             */
/*   Updated: 2025/05/28 14:04:24 by ayayamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t	ft_put_signed_nbr(int c)
{
	size_t	count;

	count = 0;
	if (c < 0)
	{
		count += ft_put_char('-');
		c = -c;
	}
	if (c >= 10)
		count += ft_put_signed_nbr((c / 10));
	count = count + ft_put_char((c % 10) + '0');
	return (count);
}

size_t	ft_put_unsigned_nbr(unsigned int c)
{
	size_t	count;

	count = 0;
	if (c >= 10)
		count += ft_put_unsigned_nbr((c / 10));
	count += ft_put_char((c % 10) + '0');
	return (count);
}
