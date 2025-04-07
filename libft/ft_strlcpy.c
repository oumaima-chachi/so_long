/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochachi <ochachi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:32:55 by ochachi           #+#    #+#             */
/*   Updated: 2024/11/08 21:05:10 by ochachi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	p;

	i = 0;
	p = ft_strlen(src);
	if (size == 0)
		return (p);
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (p);
}
/*
#include <stdio.h>

int	main(void)
{
	char	dest[20];
	char	src[] = "oumaima";

	size_t i = strlcpy(dest,src,20);
	printf("dest is %s\n",dest);
	printf("src is %zu", i);
}*/
