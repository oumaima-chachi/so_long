/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochachi <ochachi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:52:22 by ochachi           #+#    #+#             */
/*   Updated: 2025/03/27 11:54:33 by ochachi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	ssize_t	result;

	result = write(1, &c, 1);
	if (result == -1)
	{
		return (-1);
	}
	return (1);
}

int	ft_putnbr(int n)
{
	char	c;
	int		calc;

	calc = 0;
	if (n == -2147483648)
		return (write(1, "-2147483648", 11));
	if (n < 0)
	{
		calc += ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
		calc += ft_putnbr(n / 10);
	c = (n % 10) + '0';
	calc += write(1, &c, 1);
	return (calc);
}

int	ft_putstr(char *s)
{
	if (s == NULL)
		return (write(1, "(null)", 6));
	return (write(1, s, ft_strtool(s)));
}

int	ft_putunbr(unsigned int n)
{
	int		count;
	char	c;

	count = 0;
	if (n >= 10)
	{
		count += ft_putunbr(n / 10);
	}
	c = (n % 10) + '0';
	count += write(1, &c, 1);
	return (count);
}
