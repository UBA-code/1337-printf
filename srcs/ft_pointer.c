/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybel-hac <ybel-hac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 20:21:02 by ybel-hac          #+#    #+#             */
/*   Updated: 2022/10/29 12:59:18 by ybel-hac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_pointer(size_t pointer, int *len)
{
	if (pointer == 0)
		ft_putstr("0x0", len);
	else
	{
		ft_putstr("0x", len);
		ft_hex(pointer, 'a', len);
	}
}
