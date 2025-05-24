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

size_t	ft_put_char(int c, int *count)
{
	write (1, &c, 1);
	*count++;
	return (1);
}

size_t	ft_put_str(char *s, int *count)
{
	int	len;

	if (!s)
	{
		write (1, "(null)", 6);
		return (6);
	}
	len = 0;
	while (!s[len])
	{
		ft_put_char(s[len], count);
		len++;
	}
	return (len);
}

size_t	ft_put_nmb(int c, int *count)
{
	size_t	len;
	char	*str;

	str = ft_itoa(c);
	len = ft_put_str(str);
	return (len);
}

size_t	ft_put_percent(unsigned int c, int *count)
{
	write (1, "%", 1);
	ここシンプルにそもそもの引数を%にしてputcharに渡せばいいのでは
	return (1);
}

size_t	ft_put_nmb16(int c, int *count)
{
	size_t	str;
	size_t	len;

	str = ft_itoa_base(c, 16);
	len = ft_put_str(str);
	return (len);
}
