/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_to_hexadecimal.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoudi-b <mdoudi-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:29:52 by mdoudi-b          #+#    #+#             */
/*   Updated: 2024/02/05 16:05:22 by mdoudi-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_hexa(unsigned long num)
{
	int		count;
	char	*hexadecimal_table;

	count = 0;
	hexadecimal_table = "0123456789abcdef";
	if (num < 16)
		count += ft_putchar(hexadecimal_table[num]);
	if (num >= 16)
	{
		count += ft_hexa(num / 16);
		count += ft_hexa(num % 16);
	}
	return (count);
}

int	ft_to_hexadecimal(unsigned long num)
{
	int		count;

	count = 0;
	if (!num)
	{
		write (1, "0x0", 3);
		return (3);
	}
	else
	{
		write (1, "0x", 2);
		count += ft_hexa(num);
		return (count + 2);
	}
}
