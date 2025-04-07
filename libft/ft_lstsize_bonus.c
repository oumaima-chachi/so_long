/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochachi <ochachi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:54:13 by ochachi           #+#    #+#             */
/*   Updated: 2024/11/05 16:34:24 by ochachi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
/*int main()
{
	t_list *list;
	char *ptr = "oumaima";
	list = ft_lstnew(ptr);
	char *prr = "marouan";
	ft_lstadd_front(&list,ft_lstnew(prr));
	int r = ft_lstsize_bonus(list);
	printf("%d\n",r);
}*/