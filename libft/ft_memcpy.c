/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochachi <ochachi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:09:09 by ochachi           #+#    #+#             */
/*   Updated: 2024/11/08 18:26:55 by ochachi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	d = dest;
	s = src;
	while (n > 0)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return (dest);
}

// #include <stdio.h>
// int main()
// {
// 	int src[] = {1,2,3};
// 	int dst[3];
// 	//char num[] = ft_memcpy(dst ,src, 4);
// 	ft_memcpy(dst,src, 12);
// 	printf("%d,%d,%d\n",dst[0],dst[1],dst[2]);
// 	return (0);
// }