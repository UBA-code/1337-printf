/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex_pointer.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybel-hac <ybel-hac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 20:14:08 by ybel-hac          #+#    #+#             */
/*   Updated: 2022/10/27 17:07:55 by ybel-hac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
int ft_put_hex_pointer(size_t num, int *len)
{
	size_t i;
	size_t remain;
	char *tab;
	int num_len;
	
	num_len = ft_get_num_len(num);
	tab = malloc(sizeof(char ) * num_len);
	if (!tab)
		return (0);
	i = 0;
	while (num != 0)
	{
		remain = num % 16;
		if (remain < 10)
			tab[i++] = remain + 48;
		else
			tab[i++] = remain + 55;
		num /= 16;
	}
	tab[i] = '\0';
	ft_putstr("0x", len);
	ft_putstr_reversed(tab);
	return (ft_strlen(tab));
}
