/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybel-hac <ybel-hac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 14:44:11 by ybel-hac          #+#    #+#             */
/*   Updated: 2022/10/25 14:18:00 by ybel-hac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H


#include <stdarg.h>
#include <unsitd.h>
#include <limits.h>
#include "./libft/libft.h"

int ft_printf(const char *format, ...);

// srcs
int ft_putstr(char *s);
void ft_putchar(char c);
void ft_putnbr(int nb);


// flags
void flag_char(char c);
int flag_arr(char *s);
int flag_digit(int nb);
int flag_unsigned(unsigned int nb);
int flag_int(size_t nb);


#endif