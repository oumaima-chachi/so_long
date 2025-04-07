/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochachi <ochachi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:01:53 by ochachi           #+#    #+#             */
/*   Updated: 2025/03/27 11:55:27 by ochachi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strleen(const char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	int		len;
	char	*result;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strleen(s1) + ft_strleen(s2);
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		result[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		result[i + j] = s2[j];
		j++;
	}
	result[i + j] = '\0';
	return (result);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	i;

	if (!s)
		return (NULL);
	dup = malloc(sizeof(char) * (ft_strleen(s) + 1));
	if (!dup)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
// int main()
// {
// 	char *c = "oumaima";
// 	printf("%d",ft_strlen(c));
// }
// int main()
// {
// 	char s1[] = "ouma";
// 	char s2[] = ",zwina";
// 	printf("%s\n",ft_strjoin(s1,s2));
// }
// int	main(void)
// {
// 	const char	*o = "oumaima, zwina!";
// 	char		*d;
// 	d = ft_strdup(o);
// 	printf("original: %s\n", o);
// 	printf("duplicate: %s\n", d);
// }
// int	main(void)
// {
// 	char	dd[] = "oumaima";
// 	char	*result;
// 	result = ft_strchr(dd,'i');
// 	printf("%s",result);
// }