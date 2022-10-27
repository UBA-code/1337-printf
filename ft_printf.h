/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybel-hac <ybel-hac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 14:44:11 by ybel-hac          #+#    #+#             */
/*   Updated: 2022/10/27 17:08:08 by ybel-hac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H


#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

int ft_printf(const char *format, ...);

// srcs
void check_flags(char c, int *len, va_list arg);
void ft_putstr(char *s, int *len);
void ft_putchar(char c);
void ft_putnbr(int nb);
int ft_put_hex(unsigned int num, char c);
void ft_putnbr_unsigned(unsigned int nb);
int ft_strlen(char *s);
int	ft_tolower(int c);
int ft_put_hex_pointer(size_t num, int *len);
int ft_get_num_len(size_t num);
void	ft_putstr_reversed(char *s);



// flags
void flag_char(char c, int *len);
void flag_arr(char *s, int *len);
void flag_digit(size_t nb, int *len);
void flag_unsigned(unsigned int nb, int *len);
void flag_int(size_t nb, int *len);
void flag_num_hex(unsigned int num, int *len);
void flag_num_hex_upp(unsigned int num, int *len);
void flag_pointer(size_t p, int *len);



#endif