/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kurimaru <kurimaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 13:05:46 by ayayamad          #+#    #+#             */
/*   Updated: 2025/05/26 22:04:52 by kurimaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t	ft_put_char(int c)
{
	write (1, &c, 1);
	return (1);
}

size_t	ft_put_str(char *s)
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
