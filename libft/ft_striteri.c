/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochachi <ochachi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 21:17:31 by ochachi           #+#    #+#             */
/*   Updated: 2024/11/08 21:17:48 by ochachi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void	to_uppercase(unsigned int index, char *c)
{
	*c = ft_toupper(*c);
}
*/
// #include <stdio.h>
// int	main(void) {
// 	char str[] = "hello";
// 	ft_striteri(str, to_uppercase);
// 	printf("%s\n", str);
// 	return (0);
// }
