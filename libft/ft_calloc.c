/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochachi <ochachi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 21:35:51 by ochachi           #+#    #+#             */
/*   Updated: 2024/11/08 16:57:46 by ochachi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t taille)
{
	char	*ptrt;

	ptrt = malloc(num * taille);
	if (!ptrt)
	{
		return (NULL);
	}
	ft_bzero(ptrt, num * taille);
	return (ptrt);
}
// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	int		i;
// 	char	*ptrt;
// 	i = 0;
// 	ptrt = calloc(0, 0);
// 		printf("%s \n", ptrt);
// }
/*
#include <stdio.h>
#include <string.h>
int	main(void) {
	int i  = 0;
	int *tab = ft_calloc(5, sizeof(int)); // Pas de cast ici

	while(i < 5)
	{
		printf("%d\n",tab[i]);
		i++;
	}
	return (0);
}*/