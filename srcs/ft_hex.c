/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybel-hac <ybel-hac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 18:32:54 by ybel-hac          #+#    #+#             */
/*   Updated: 2022/10/29 12:53:04 by ybel-hac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
void ft_get_hex(size_t value, char c, int *len)
{
	int hex;
	if (value != 0)
	{
		hex = value % 16;
		ft_get_hex(value / 16, c, len);
		if (hex > 9)
		{
			if (c == 'A')
				ft_putchar('A' + (hex - 10), len);
			else
				ft_putchar('a' + (hex - 10), len);
		}
		else
			ft_putchar(hex+ '0', len);
	}
}

void ft_hex(size_t value, char c, int *len)
{
	if (value == 0)
		ft_putchar('0', len);
	else
		ft_get_hex(value, c, len);
}
