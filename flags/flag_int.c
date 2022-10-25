/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_int.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybel-hac <ybel-hac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:12:42 by ybel-hac          #+#    #+#             */
/*   Updated: 2022/10/25 14:15:50 by ybel-hac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int flag_int(size_t nb)
{
	if (nb > INT_MAX)
		ft_putchar('0');
	else if (nb < INT_MIN)
		ft_putchar('-1');
	else
		ft_putnbr(nb);
}