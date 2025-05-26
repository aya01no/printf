/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayayamad <kurimaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 13:05:46 by ayayamad          #+#    #+#             */
/*   Updated: 2025/05/22 14:51:54 by ayayamad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t	ft_put_char(int c, int *count)
{
	write (1, &c, 1);
	(*count)++;
	return (1);
}

size_t	ft_put_str(char *s, int *count)
{
	size_t	len;

	if (!s)
		ft_put_str("(null)", count);
	len = 0;
	while (s[len])
	{
		ft_put_char(s[len], count);
		len++;
	}
	return (len);
}
