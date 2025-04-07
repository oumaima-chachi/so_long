/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochachi <ochachi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 09:24:08 by ochachi           #+#    #+#             */
/*   Updated: 2024/11/07 18:09:52 by ochachi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	if (i < n)
	{
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	const char	*str1 = "abcde!";
	const char	*str2 = "jdfskn!";
	const char	*str3 = "bcdef!";
	int			result1;
	int			result2;
	int			result3;

	result1 = ft_strncmp(str1, str2, 5);
	result2 = ft_strncmp(str1, str3, 5);
	result3 = ft_strncmp(str1, str3, 7);
	printf("Result 1: %d\n", result1);
	printf("Result 2: %d\n", result2);
	printf("Result 3: %d\n", result3);
	return (0);
}*/
