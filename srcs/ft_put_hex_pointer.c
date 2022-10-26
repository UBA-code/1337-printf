/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex_pointer.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybel-hac <ybel-hac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 20:14:08 by ybel-hac          #+#    #+#             */
/*   Updated: 2022/10/26 15:16:16 by ybel-hac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
int ft_put_hex_pointer(size_t num, char c)
{
	// ft_putnbr((int) num);
	// c = 'a';
	// return (1);
	
	size_t i;
	size_t remain;
	// size_t nb = num;
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
	printf("print from ft_put_hex_pointer : %s\n", tab);
	i = ft_strlen(tab);
	if (c == 'A')
		while (i >= 0)
			ft_putchar(tab[i--]);
	else
		while (i >= 0)
			ft_putchar(ft_tolower(tab[i--]));
	return (ft_strlen(tab));
}
