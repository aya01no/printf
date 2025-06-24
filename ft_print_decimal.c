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

#include "ft_printf.h"

int	ft_put_signed_nbr(int c)
{
	int		count;
	long	n;

	n = (long)c;
	count = 0;
	if (n < 0)
	{
		count += ft_put_char('-');
		n = -n;
	}
	if (n >= 10)
		count += ft_put_signed_nbr((n / 10));
	count += ft_put_char((n % 10) + '0');
	return (count);
}

int	ft_put_unsigned_nbr(unsigned int c)
{
	int	count;

	count = 0;
	if (c >= 10)
		count += ft_put_unsigned_nbr((c / 10));
	count += ft_put_char((c % 10) + '0');
	return (count);
}
