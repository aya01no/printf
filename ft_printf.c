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
#include <stdarg.h>

static	int	ft_next_check(char *s, va_list *ap)
{
	if (*s == 'c' || *s == 's')
		return (ft_print_c(*ap));
	if (*s == 'd' || *s == 'i' || *s == 'u')
		return (ft_print_nmb(*ap));
	if (*s == 'x' || *s == 'X' || *s == 'p')
		return (ft_print_n16(*ap));
	if (*s == '%')
		return (ft_print_p(*ap));
}

static int	ft_print_c(va_list *ap)
{
	int		len;
	char	*c;

	c = (char *)va_arg(*ap, int);

	if (!c)
		return (null);
	len = ft_strlen(c);
	write(1, &c, len);
	return (len);
}

int	ft_printf(const char *s, ...)
{
	int		count;
	va_list	ap;
	int		args;

	va_start(ap, *s);
	count = 0;
	while (*s)
	{
		if (*s == '%')
		{
			s++;
			count += ft_next_check(*s, &ap);
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
