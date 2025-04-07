/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochachi <ochachi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 16:58:30 by ochachi           #+#    #+#             */
/*   Updated: 2024/11/08 18:39:02 by ochachi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len(long n)
{
	long	l;

	l = 0;
	if (n <= 0)
		l++;
	while (n != 0)
	{
		n = n / 10;
		l++;
	}
	return (l);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		i;
	int		l;
	long	num;

	num = (long)n;
	l = len(num);
	i = l - 1;
	res = malloc(l + 1);
	if (!res)
		return (NULL);
	if (num < 0)
	{
		num = -num;
		res[0] = '-';
	}
	res[l] = '\0';
	while (num > 0)
	{
		res[i--] = (num % 10) + '0';
		num = num / 10;
	}
	if (n == 0)
		res[0] = '0';
	return (res);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int		num1;
// 	int		num2;
// 	int		num3;
// 	int		num4;
// 	char	*str1;
// 	char	*str2;
// 	char	*str3;
// 	char	*str4;

// 	num1 = 42;
// 	num2 = -42;
// 	num3 = 0;
// 	num4 = -2147483648;
// 	str1 = ft_itoa(num1);
// 	str2 = ft_itoa(num2);
// 	str3 = ft_itoa(num3);
// 	str4 = ft_itoa(num4);
// 	printf("itoa(%d) = %s\n", num1, str1);
// 	printf("itoa(%d) = %s\n", num2, str2);
// 	printf("itoa(%d) = %s\n", num3, str3);
// 	printf("itoa(%d) = %s\n", num4, str4);
// 	return (0);
// }