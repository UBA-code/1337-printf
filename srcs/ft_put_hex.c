/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybel-hac <ybel-hac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:50:06 by ybel-hac          #+#    #+#             */
/*   Updated: 2022/10/26 20:20:50 by ybel-hac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
int ft_put_hex(unsigned int num, char c)
{
	int i;
	unsigned int remain;
	char tab[100];

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
	i = ft_strlen(tab);
	if (c == 'A')
		while (i >= 0)
			ft_putchar(tab[i--]);
	else
		while (i >= 0)
			ft_putchar(ft_tolower(tab[i--]));
	return (ft_strlen(tab));
}