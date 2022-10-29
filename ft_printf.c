/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybel-hac <ybel-hac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:19:44 by ybel-hac          #+#    #+#             */
/*   Updated: 2022/10/29 12:54:07 by ybel-hac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void check_flags(char flag, int *len, va_list arg)
{
	if (flag == 'c')
		ft_putchar(va_arg(arg, int), len);
	else if (flag == 's')
		ft_putstr(va_arg(arg, char *), len);
	else if (flag == 'p')
		ft_pointer(va_arg(arg, size_t), len);
	else if (flag == 'd' || flag == 'i')
		ft_putnbr(va_arg(arg, int), len);
	else if (flag == 'u')
		ft_putnbr_unsigned(va_arg(arg, unsigned int), len);
	else if (flag == 'x')
		ft_hex(va_arg(arg, unsigned int), 'a', len);
	else if (flag == 'X')
		ft_hex(va_arg(arg, unsigned int), 'A', len);
}

int ft_printf(const char *format, ...)
{
	int len;
	va_list ptr;
	int i;

	i = 0;
	len = 0;
	va_start(ptr, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] != '%')
			check_flags(format[++i], &len, ptr);
		else if (format[i] == '%' && format[i + 1] == '%')
			ft_putchar(format[++i], &len);
		else
			ft_putchar(format[i], &len);
		i++;
	}
	return (len);
}
