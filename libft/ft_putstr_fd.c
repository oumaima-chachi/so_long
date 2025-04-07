/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochachi <ochachi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 14:19:39 by ochachi           #+#    #+#             */
/*   Updated: 2024/11/07 19:55:34 by ochachi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s == NULL)
	{
		return ;
	}
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
}
// #include <stdio.h>
// #include <fcntl.h>
// #include <unistd.h>
// int main() {
// 	int fd = open("example.txt", O_RDWR | O_CREAT, S_IRUSR | S_IWUSR);
// 	printf("%d\n", fd);
// 	ft_putstr_fd("hhhhhhhhh", 3);
// }
/*
#include <unistd.h>

int	main(void)
{
	ft_putstr_fd("oumaima, zwina\n", 10);
	return (0);
}
*/
