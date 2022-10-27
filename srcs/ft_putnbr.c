/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybel-hac <ybel-hac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:42:41 by ybel-hac          #+#    #+#             */
/*   Updated: 2022/10/27 20:19:30 by ybel-hac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
static int check_nb(long long nb, int *len)
{
	if (nb > 2147483647)
	{
		ft_putchar('-', len);
		ft_putchar('1', len);
		return (0);
	}
	else if (nb < -2147483648)
	{
		ft_putchar('0', len);
		return (0);
	}
	return (1);
}

void ft_putnbr(long long nb, int *len)
{
	if (!check_nb(nb, len))
		return ;
	if (nb == -2147483648)
	{
		ft_putchar('-', len);
		ft_putchar('2', len);
		ft_putnbr(147483648, len);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10, len);
		ft_putchar(nb % 10 + '0', len);
	}
	else if (nb < 0)
	{
		ft_putchar('-', len);
		ft_putnbr(-nb, len);
	}
	else
		ft_putchar(nb + '0', len);
}