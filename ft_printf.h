/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybel-hac <ybel-hac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 14:44:11 by ybel-hac          #+#    #+#             */
/*   Updated: 2022/10/26 13:56:43 by ybel-hac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H


#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

int ft_printf(const char *format, ...);

// srcs
void check_flags(char c, int *len, void *arg);
void ft_putstr(char *s, int *len);
void ft_putchar(char c);
void ft_putnbr(int nb);
int ft_put_hex(int num, char c);
void ft_putnbr_unsigned(unsigned int nb);
int ft_strlen(char *s);
int	ft_tolower(int c);
int ft_put_hex_pointer(size_t num, char c);



// flags
void flag_char(char c, int *len);
void flag_arr(char *s, int *len);
void flag_digit(int nb, int *len);
void flag_unsigned(unsigned int nb, int *len);
void flag_int(size_t nb, int *len);
void flag_num_hex(int num, int *len);
void flag_num_hex_upp(int num, int *len);
void flag_pointer(int p, int *len);



#endif