/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybel-hac <ybel-hac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 14:43:12 by ybel-hac          #+#    #+#             */
/*   Updated: 2022/10/23 20:42:45 by ybel-hac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int printf(const char *format, ...)
{
	int i;

	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
				flag_char();
			else if (format[i + 1] == 's')
				flag_arr();
			else if (format[i + 1] == 'p')
				flag_pointer();
			else if (format[i + 1] == 'd')
				flag_digit();
			else if (format[i + 1] == 'i')
				flag_
		}
	}
}