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

#include "libftprintf.h"

static	size_t	ft_type_check(char *s, va_list *ap)
{
	int	is_upper;

	if (*s == 'c')
		return (ft_put_char(va_arg(*ap, int)));
	if (*s == 's')
		return (ft_put_str(va_arg(*ap, char *)));
	if (*s == 'd' || *s == 'i')
		return (ft_put_nbr(*ap, int));
	if (*s == 'u')
		return (ft_put_signed_nbr(va_arg(*ap, int)));
	if (*s == 'x')
	{
		is_upper = 0;
		return (ft_put_nbr_hex(va_arg(*ap, unsigned int), is_upper));
	}
	if (*s == 'x')
	{
		is_upper = 1;
		return (ft_put_nbr_hex(va_arg(*ap, unsigned int), is_upper));
	}
	if (*s == '%')
		return (ft_put_char('%'));
	if (*s == 'p')
		return (ft_put_ptr(va_arg(*ap, void *)));
	return (0);
}

int	ft_printf(const char *s, ...)
{
	size_t		count;
	va_list		ap;
	int			args;

	va_start(ap, *s);
	count = 0;
	while (*s)
	{
		if (*s == '%')
		{
			count = ft_type_check(*s++, &ap);
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
