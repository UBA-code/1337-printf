/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybel-hac <ybel-hac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 18:25:39 by ybel-hac          #+#    #+#             */
/*   Updated: 2022/10/29 12:59:38 by ybel-hac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_putnbr_unsigned(unsigned int nb, int *len)
{
	if (nb > 9)
	{
		ft_putnbr_unsigned(nb / 10, len);
		ft_putchar(nb % 10 + '0', len);
	}
	else
		ft_putchar(nb + '0', len);
}
