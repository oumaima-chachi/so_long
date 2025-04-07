/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochachi <ochachi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 09:49:46 by ochachi           #+#    #+#             */
/*   Updated: 2024/11/08 17:10:26 by ochachi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((ft_isdigit(c)) || (ft_isalpha(c)))
		return (1);
	return (0);
}
/*int main()
{
	int t;

	t = 'a' - '1';
	printf("%d", ft_isalnum(t));
}*/
/*
#include <stdio.h>
int main()
{
	char a = '@';
	printf("%d",ft_isalnum(a));
}
*/