/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoudi-b <mdoudi-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 17:16:46 by mdoudi-b          #+#    #+#             */
/*   Updated: 2024/02/08 12:39:37 by mdoudi-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <limits.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	ft_putstr(char *str);
int	ft_to_hexadecimal(unsigned long num);
int	ft_putchar(int c);
int	ft_putnbr(int n);
int	ft_putnbr_unsigned_int(unsigned int n);
int	ft_to_lower(unsigned int num);
int	ft_to_upper(unsigned int num);

#endif