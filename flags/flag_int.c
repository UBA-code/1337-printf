/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_int.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybel-hac <ybel-hac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:12:42 by ybel-hac          #+#    #+#             */
/*   Updated: 2022/10/26 19:20:52 by ybel-hac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void flag_int(size_t nb, int *len)
{
	int i;
	size_t number;
	
	i = 0;
	number = nb;
	/*
	if (nb > (size_t)INT_MAX)
		ft_putchar('0');
	else if (nb < (size_t)INT_MIN)
	{
		ft_putchar('-');
		ft_putchar('1');
	}
	*/
	// else
	// {
		while (number != 0)
		{
			number /= 10;
			i++;
		}
		*len = i;
		ft_putnbr(nb);
	// }
}