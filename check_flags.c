/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybel-hac <ybel-hac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 22:03:04 by ybel-hac          #+#    #+#             */
/*   Updated: 2022/10/27 17:05:31 by ybel-hac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void check_flags(char c, int *len, va_list arg)
{
	if (c == 'c')
		flag_char(va_arg(arg, int), len);
	else if (c == 's')
		flag_arr(va_arg(arg, char *), len);
	else if (c == 'p') // not done
		flag_pointer(va_arg(arg, size_t), len);
	else if (c == 'd')
		flag_digit(va_arg(arg, int), len);
	else if (c == 'i')
		flag_int(va_arg(arg, int), len);
	else if (c == 'u')
		flag_unsigned(va_arg(arg, unsigned int), len);
	else if (c == 'x')
		flag_num_hex(va_arg(arg, int), len);
	else if (c == 'X')
		flag_num_hex_upp(va_arg(arg, int), len);
}