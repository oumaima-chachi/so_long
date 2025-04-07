/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochachi <ochachi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 19:58:32 by ochachi           #+#    #+#             */
/*   Updated: 2024/11/08 20:41:22 by ochachi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;

	dest_len = 0;
	src_len = 0;
	while (dest[dest_len] != '\0' && dest_len < size)
		dest_len++;
	while (src[src_len])
		src_len++;
	if (size <= dest_len)
		return (size + src_len);
	i = 0;
	while (i < (size - dest_len - 1) && src[i])
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char		dest[30] = "oumaima";
	const char	*src = " zwina";
	char		dest1[30] = "oumaima";
	const char	*src2 = " zwina";

	printf("%d\n",ft_strlcat(dest,src,14));
	printf("%s\n",dest);
	printf("%d\n",strlcat(dest1,src2,14));
}*/