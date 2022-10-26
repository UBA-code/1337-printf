/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_unsigned.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybel-hac <ybel-hac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:16:22 by ybel-hac          #+#    #+#             */
/*   Updated: 2022/10/25 19:50:03 by ybel-hac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void flag_unsigned(unsigned int nb, int *len)
{
	int i;
	int nbr;

	nbr = nb;
	i = 0;
	while (nbr != 0)
	{
		nbr /= 10;
		i++;
	}
	*len = i;
	ft_putnbr_unsigned(nb);
}