/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayayamad <ayayamad@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 14:03:03 by ayayamad          #+#    #+#             */
/*   Updated: 2025/05/28 14:04:35 by ayayamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libftprintf.h"

size_t	ft_put_char(int c, size_t len)
{
	write (1, &c, 1);
	return (1);
}

size_t	ft_put_str(char *s, size_t len)
{
	size_t	len;

	if (!s)
		ft_put_str("(null)");
	len = 0;
	while (s[len])
	{
		ft_put_char(s[len]);
		len++;
	}
	return (len);
}
