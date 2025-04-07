/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochachi <ochachi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 19:18:38 by ochachi           #+#    #+#             */
/*   Updated: 2024/11/08 22:39:48 by ochachi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*p;
	int		l;
	int		i;

	i = 0;
	l = 0;
	start = 0;
	end = ft_strlen(s1) - 1;
	if (!s1 || !set)
		return (NULL);
	while (s1[start] && is_set(s1[start], set))
		start++;
	while (end > start && is_set(s1[end], set))
		end--;
	l = end - start + 1;
	p = (char *)malloc(l + 1);
	if (!p)
		return (NULL);
	while (start <= end)
		p[i++] = s1[start++];
	p[i] = '\0';
	return (p);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char *s1;
	char *set;

	s1 = "  ziz oumzizaima ziz";
	set = " ziz";
	char *result = ft_strtrim(s1, set); // Stocker le résultat
	printf("%s\n", result);
	return (0);
}*/