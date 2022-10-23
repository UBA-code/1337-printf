/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybel-hac <ybel-hac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 22:03:04 by ybel-hac          #+#    #+#             */
/*   Updated: 2022/10/23 22:03:44 by ybel-hac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void check_flags(char c)
{
	if (c == 'c')
		flag_char();
	else if (c == 's')
		flag_arr();
	else if (c == 'p')
		flag_pointer();
	else if (c == 'd')
		flag_digit();
	else if (c == 'i')
		flag_int();
	else if (c == 'u')
		flag_unsigned();
	else if (c == 'x')
		flag_unsigned();
	else if (c == 'x')
		flag_num_hex();
	else if (c == 'X')
		flag_num_hex_upp();
}