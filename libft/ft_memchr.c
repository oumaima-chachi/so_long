/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochachi <ochachi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:14:07 by ochachi           #+#    #+#             */
/*   Updated: 2024/11/08 18:14:18 by ochachi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	unsigned char		ch;

	p = (const unsigned char *)s;
	ch = (unsigned char)c;
	while (n > 0)
	{
		if (*p == ch)
		{
			return ((void *)p);
		}
		p++;
		n--;
	}
	return (NULL);
}
// #include <stdio.h>
// int	main(void)
// {
// 	char s[] = "oumaima zwina";
// 	char c = 'a';
// 	char *result = ft_memchr(s,c,sizeof(s));
// 	printf("%s",result);
// }