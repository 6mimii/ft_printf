/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned_int.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoudi-b <mdoudi-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 12:59:39 by mdoudi-b          #+#    #+#             */
/*   Updated: 2024/02/04 19:36:32 by mdoudi-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_unsigned_int(unsigned int n)
{
	char			c;
	unsigned int	count;

	count = 0;
	if (n == 2147483648)
	{
		return (write(1, "2147483648", 10));
	}
	if (n < 0)
	{
		count = count + 1;
		n = -n;
	}
	if (n >= 10)
	{
		count += ft_putnbr_unsigned_int(n / 10);
	}
	c = (n % 10) + '0';
	count += write(1, &c, 1);
	return (count);
}

/* int main()
{
qunsigned	int	count;

	count = ft_putnbr_unsigned_int(12345);
	printf("\nCharacters written: %u\n", count);

	count = ft_putnbr_unsigned_int(67890);
	printf("\nCharacters written: %u\n", count);

	count = ft_putnbr_unsigned_int(0);
	printf("\nCharacters written: %u\n", count);

	return (0);
} */
