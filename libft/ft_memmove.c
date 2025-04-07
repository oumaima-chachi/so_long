/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochachi <ochachi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:44:07 by ochachi           #+#    #+#             */
/*   Updated: 2024/11/09 01:11:18 by ochachi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	if ((d == s) || (n == 0))
		return (dest);
	if (d < s)
	{
		while (n-- > 0)
			*d++ = *s++;
	}
	else
	{
		d += n;
		s += n;
		while (n > 0)
		{
			*(--d) = *(--s);
			n--;
		}
	}
	return (dest);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	src[] = "abcdefg";

// 	//char dst[6];
// 	//char num[] = ft_memcpy(dst ,src, 4);
// 	printf("%s", ft_memmove(src + 2 ,src, 4));
// }