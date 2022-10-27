/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybel-hac <ybel-hac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:20:00 by ybel-hac          #+#    #+#             */
/*   Updated: 2022/10/27 20:22:54 by ybel-hac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int ft_printf(const char *format, ...);


//srcs
void ft_putchar(char c, int *len);
void ft_putstr(char *s, int *len);
void ft_putnbr(long long nb, int *len);
void ft_putnbr_unsigned(unsigned nb, int *len);
void ft_hex(size_t value, char c, int *len);
void ft_pointer(size_t pointer, int * len);

#endif