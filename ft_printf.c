/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybel-hac <ybel-hac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 14:43:12 by ybel-hac          #+#    #+#             */
/*   Updated: 2022/10/27 17:10:34 by ybel-hac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
	int 	i;
	int		j;
	va_list ptr;

	va_start(ptr, format);
	i = 0;
	j = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] != '%')
			check_flags(format[i++ + 1], &j, ptr);
		else if (format[i] == '%' && format[i + 1] == '%')
			ft_putchar(format[i++]);
		else
			ft_putchar(format[i]);
		i++;
	}
	va_end(ptr);
	return (j);
}