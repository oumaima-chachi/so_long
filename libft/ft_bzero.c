/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochachi <ochachi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:05:31 by ochachi           #+#    #+#             */
/*   Updated: 2024/11/08 17:25:14 by ochachi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *a, size_t n)
{
	char	*ptr;

	ptr = a;
	while (n > 0)
	{
		*ptr = 0;
		ptr++;
		n--;
	}
}
/*#include <stdio.h>
int main()
{
	int but[] = {5,2,3,6};
	ft_bzero(but, 12);
	printf("%d,%d,%d,%d\n",but[0],but[1],but[2],but[3]);
}*/