/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochachi <ochachi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:06:56 by ochachi           #+#    #+#             */
/*   Updated: 2024/11/07 18:43:32 by ochachi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	taille_s;
	char	*sub;
	size_t	i;

	if (start >= ft_strlen(s))
	{
		return (ft_strdup(""));
	}
	taille_s = ft_strlen(s);
	if (len > taille_s - start)
	{
		len = taille_s - start;
	}
	sub = malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	i = 0;
	while (i < len)
		sub[i++] = s[start++];
	sub[i] = '\0';
	return (sub);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char	*s;
// 	char	*result;

// 	s = "oumaima, zwina";
// 	result = ft_substr(s, 9, 10);
// 	printf("%s",result);
// }
