/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochachi <ochachi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 11:32:16 by ochachi           #+#    #+#             */
/*   Updated: 2024/11/08 12:33:33 by ochachi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(char const *s, char c)
{
	int		len;
	int		in_word;
	size_t	i;

	len = 0;
	in_word = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && in_word == 0)
		{
			in_word = 1;
			len++;
		}
		else
			in_word = 0;
		i++;
	}
	return (len);
}

static int	len_word(char const *s, char c)
{
	int	size;

	size = 0;
	while (s[size] != '\0' && s[size] != c)
	{
		size++;
	}
	return (size);
}

static void	*ft_free(int i, char **split)
{
	int	j;

	j = 0;
	while (j < i)
	{
		free(split[j]);
		j++;
	}
	free(split);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**split;

	i = 0;
	split = malloc((count_word(s, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			split[i] = malloc(len_word(s, c) + 1);
			if (!split[i])
				return (ft_free(i, split));
			j = 0;
			while (*s && *s != c)
				split[i][j++] = *s++;
			split[i++][j] = '\0';
		}
		else
			s++;
	}
	split[i] = NULL;
	return (split);
}

// #include <stdio.h>
// int	main(void)
// {

// 	char	**ss;
// 	ss = ft_split(str, 'd');
// 	if (ss)
// 	{
// 		int i = 0;
// 		while (ss[i])
// 		{
// 			printf("%s", ss[i]);
// 			free(ss[i]);
// 			i += 1;
// 		}
// 		free(ss);
// 	}
// 	else
// 	{
// 		printf("nadeya");
// 	}
// }