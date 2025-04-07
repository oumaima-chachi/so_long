/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochachi <ochachi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 21:15:21 by ochachi           #+#    #+#             */
/*   Updated: 2024/11/04 21:04:00 by ochachi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s) - 1;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	if ((char)c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*s;
	char	c;
	char	*result;

	s = "oumaima";
	c = 'a';
	result = ft_strrchr(s,c);
	//char *result1 = strrchr(s,c);
	printf("%s\n",result);
	//printf("%s\n",result1);
}
*/