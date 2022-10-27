/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_reversed.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybel-hac <ybel-hac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:30:27 by ybel-hac          #+#    #+#             */
/*   Updated: 2022/10/27 15:48:04 by ybel-hac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
void	ft_putstr_reversed(char *s)
{
	int len;

	len = ft_strlen(s);
	while (len >= 0)
	{
		ft_putchar(ft_tolower(s[len--]));
	}
}