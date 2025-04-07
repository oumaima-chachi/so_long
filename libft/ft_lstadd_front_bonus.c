/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochachi <ochachi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:39:29 by ochachi           #+#    #+#             */
/*   Updated: 2024/11/06 23:24:47 by ochachi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new)
	{
		new->next = *lst;
		*lst = new;
	}
}
/*int main()
{
	char *ptr = "oumaima";
	t_list *list = ft_lstnew(ptr);
	char *prr = "marouan";
	ft_lstadd_front(&list,ft_lstnew(prr));
	printf("%s\n",list->content);
}*/