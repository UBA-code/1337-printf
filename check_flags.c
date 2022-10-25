/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybel-hac <ybel-hac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 22:03:04 by ybel-hac          #+#    #+#             */
/*   Updated: 2022/10/25 13:40:58 by ybel-hac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void check_flags(char c, int current_arg_nb, void *arg)
{
	if (c == 'c')
		flag_char(arg);
	else if (c == 's')
		flag_arr(arg);
	else if (c == 'p') // not done
		flag_pointer(arg);
	else if (c == 'd')
		flag_digit(arg);
	else if (c == 'i')
		flag_int(arg);
	else if (c == 'u')
		flag_unsigned(arg);
	else if (c == 'x')
		flag_num_hex(arg);
	else if (c == 'X')
		flag_num_hex_upp(arg);
}