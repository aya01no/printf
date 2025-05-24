/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurimaru <kurimaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 13:05:46 by kurimaru          #+#    #+#             */
/*   Updated: 2025/05/22 14:51:54 by kurimaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t	ft_print_char(int c)
{
	write (1, &c, 1);
	return (1);
}

size_t	ft_print_str(char *s)
{
	size_t	len;

	if (!s)
	{
		write (1, "(null)", 6);
		return (6);
	}
	len = 0;
	while (!s[len])
	{
		ft_print_char(s[len]);
		len++;
	}
	return (len);
}

size_t	ft_print_nmb(int c)
{
	size_t	len;
	char	*str;

	str = ft_itoa(c);
	len = ft_print_str(str);
	return (len);
}

size_t	ft_print_percent(unsigned int c)
{
	write (1, "%", 1);
	return (1);
}

size_t	ft_print_nmb16(int c)
{
	size_t	str;
	size_t	len;

	str = ft_itoa_base(c, 16);
	len = ft_print_str(str);
	return (len);
}
