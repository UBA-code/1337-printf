/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_digit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybel-hac <ybel-hac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:41:24 by ybel-hac          #+#    #+#             */
/*   Updated: 2022/10/26 19:25:18 by ybel-hac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
void flag_digit(size_t nb, int *len)
{
	int len_nb;
	int number;
	
	number = nb;
	len_nb = 0;
	while (number != 0)
	{
		number /= 10;
		len_nb++;
	}
	if (nb < 0)
		len_nb++;
	*len = len_nb;
	ft_putnbr(nb);
}