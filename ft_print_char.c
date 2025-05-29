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

#include "ft_printf.h"

size_t	ft_put_char(int c)
{
	write (1, &c, 1);
	return (1);
}

size_t	ft_put_str(char *s)
{
	size_t	count;

	if (!s)
		return (ft_put_str("(null)"));
	count = 0;
	while (*s)
		count += ft_put_char(*s++);
	return (count);
}
