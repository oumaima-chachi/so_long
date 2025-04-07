/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochachi <ochachi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 10:20:54 by ochachi           #+#    #+#             */
/*   Updated: 2024/11/08 21:08:56 by ochachi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len_s;
	char	*strmapi;
	size_t	i;

	if (!s || !f)
		return (NULL);
	len_s = ft_strlen(s);
	strmapi = malloc(len_s + 1);
	if (!strmapi)
	{
		return (NULL);
	}
	i = 0;
	while (i < len_s)
	{
		strmapi[i] = f(i, s[i]);
		i++;
	}
	strmapi[i] = '\0';
	return (strmapi);
}
/*
char	to_lower(unsigned int index, char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + 32);
	}
	return (c);
}
*/
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "OUMAIMA, ZWINA";
	char	*result;

	result = ft_strmapi(str, to_lower);
	printf("%s\n", result);
	return (0);
}*/