/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochachi <ochachi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:57:28 by ochachi           #+#    #+#             */
/*   Updated: 2024/11/07 22:45:57 by ochachi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *a, int b, size_t n)
{
	char	*ptr;

	ptr = (char *)a;
	while (n > 0)
	{
		*ptr = (char)b;
		ptr++;
		n--;
	}
	return (a);
}

/*
#include <stdio.h>
int	main (void)
{
	char	tab[10];
	int tab[] = {0};

	ft_memset(tab, 'A', 10);
	printf("%c,%c,%c,%c,%c,%c,%c,%c,%c,%c\n",tab[0],tab[1],
	tab[2],tab[3],tab[4],tab[5],tab[6],tab[7],tab[8],tab[9]);
	ft_memset(tab+5, 'a',5);
	printf("%c,%c,%c,%c,%c,%c,%c,%c,%c,%c",tab[0],
	tab[1],tab[2],tab[3],tab[4],tab[5],
	tab[6],tab[7],tab[8],tab[9]);
}*/
/*int main()
{
		int tab[] = {0,0,0,0};
		ft_memset(tab, 5, 2);
		ft_memset(tab, 57, 1);
		//ft_memset(tab, 199, 1);
		
		printf("%d,%d,%d\n",tab[0],tab[1],tab[2]);
}*/
/*int	main()
{
	int	tab[] = {0, 0, 0, 0};

	ft_memset(tab, 1, 3);
	ft_memset(tab, 226, 2);
	ft_memset(tab, 64, 1);
	printf("%d - %d - %d - %d\n",tab[0], tab[1], tab[2], tab[3]);
}*/