/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayayamad <ayayamad@student.42tokyo.jp>     #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-05-17 08:38:41 by ayayamad          #+#    #+#             */
/*   Updated: 2025-05-17 08:38:41 by ayayamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	size_t	ft_type_check(const char *format, va_list *ap)
{
	int	is_upper;

	if (*format == 'c')
		return (ft_put_char(va_arg(*ap, int)));
	if (*format == 's')
		return (ft_put_str(va_arg(*ap, char *)));
	if (*format == 'd' || *format == 'i')
		return (ft_put_signed_nbr(va_arg(*ap, int)));
	if (*format == 'u')
		return (ft_put_unsigned_nbr(va_arg(*ap, unsigned int)));
	if (*format == 'x' || *format == 'X')
	{
		is_upper = (*format == 'X');
		return (ft_put_nbr_hex(va_arg(*ap, unsigned int), is_upper));
	}
	if (*format == '%')
		return (ft_put_char('%'));
	if (*format == 'p')
		return (ft_put_ptr(va_arg(*ap, void *)));
	return (0);
}

int	ft_printf(const char *s, ...)
{
	int			count;
	va_list		ap;

	va_start(ap, s);
	count = 0;
	while (*s)
	{
		if (*s == '%' && *(s + 1))
		{
			s++;
			count += ft_type_check((char *)s, &ap);
		}
		else
		{
			write(1, s, 1);
			count++;
		}
		s++;
	}
	va_end(ap);
	return (count);
}
