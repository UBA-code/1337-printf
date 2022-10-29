/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybel-hac <ybel-hac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:40:55 by ybel-hac          #+#    #+#             */
/*   Updated: 2022/10/28 05:43:03 by ybel-hac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
void ft_putstr(char *s, int *len)
{
	int i;

	i = 0;
	if (!s)
		ft_putstr("(null)", len);
	else
		while (s[i])
		{
			ft_putchar(s[i], len);
			i++;
		}
}