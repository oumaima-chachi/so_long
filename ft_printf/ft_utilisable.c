/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utilisable.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochachi <ochachi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 20:56:09 by ochachi           #+#    #+#             */
/*   Updated: 2025/03/27 11:54:02 by ochachi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_phex(unsigned long long num, char form)
{
	char	*b;
	int		calc;

	calc = 0;
	if (form == 'x')
		b = "0123456789abcdef";
	else
		b = "0123456789ABCDEF";
	if (num >= 16)
	{
		calc += ft_phex(num / 16, form);
	}
	calc += ft_putchar(b[num % 16]);
	return (calc);
}

int	ft_putp(void *p)
{
	if (!p)
	{
		return (write(1, "(nil)", 5));
	}
	write(1, "0x", 2);
	return (2 + ft_phex((unsigned long long)p, 'x'));
}

int	ft_print_pr(void)
{
	return (write(1, "%", 1));
}

size_t	ft_strtool(const char *str)
{
	size_t	tol;

	tol = 0;
	while (str[tol] != '\0')
	{
		tol++;
	}
	return (tol);
}
