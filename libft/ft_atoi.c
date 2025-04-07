/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochachi <ochachi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 20:18:21 by ochachi           #+#    #+#             */
/*   Updated: 2024/11/07 18:24:32 by ochachi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	resultat;
	int	sign;

	resultat = 0;
	sign = 1;
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' )
	{
		sign = sign * -1;
		i++;
	}
	else if (str[i] == '+')
	{
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		resultat = resultat * 10 + (str[i] - '0');
		i++;
	}
	return (resultat * sign);
}
/*
#include <stdio.h>
int main()
{
	char str[] = "-9223372036854775809";
	printf("%d\n",ft_atoi(str));
	printf("%d\n",atoi(str));
}
*/