/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochachi <ochachi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 09:32:16 by ochachi           #+#    #+#             */
/*   Updated: 2024/11/08 18:19:55 by ochachi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;

	p1 = s1;
	p2 = s2;
	while (n--)
	{
		if (*p1 != *p2)
		{
			return (*p1 - *p2);
		}
		p1++;
		p2++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void) {
	char buffer1[] = "Hello, World!";
	char buffer2[] = "Hello, World!";
	char buffer3[] = "Hello, everyone!";

	int result1 = ft_memcmp(buffer1, buffer2, 5);
	int result3 = ft_memcmp(buffer1, buffer3, 7);

	printf("Result 1: %d\n", result1);
	printf("Result 3: %d\n", result3);

	return (0);
}
*//*
#include <stdio.h>
int main()
{
	unsigned char src[] = "éabcd";
	unsigned char dst[] = "abdej";
	int num = memcmp(src ,dst,1);

	printf("%d", num);
}*/