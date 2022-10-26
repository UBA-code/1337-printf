/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybel-hac <ybel-hac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 22:03:04 by ybel-hac          #+#    #+#             */
/*   Updated: 2022/10/26 13:53:17 by ybel-hac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void check_flags(char c, int *len, void *arg)
{
	if (c == 'c')
		flag_char((char)arg, len);
	else if (c == 's')
		flag_arr((char *)arg, len);
	else if (c == 'p') // not done
		flag_pointer((int)arg, len);
	else if (c == 'd')
		flag_digit((int)arg, len);
	else if (c == 'i')
		flag_int((int)arg, len);
	else if (c == 'u')
		flag_unsigned((unsigned int)arg, len);
	else if (c == 'x')
		flag_num_hex((int)arg, len);
	else if (c == 'X')
		flag_num_hex_upp((int)arg, len);
}