/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochachi <ochachi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:11:01 by ochachi           #+#    #+#             */
/*   Updated: 2024/11/06 23:25:11 by ochachi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
	{
		return (NULL);
	}
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}
// int main()
// {
// 	t_list *list;
// 	char *ptr = "oumaima";
// 	list = ft_lstnew(ptr);
// 	char *prr = "marouan";
// 	ft_lstadd_front(&list,ft_lstnew(prr));
// 	// int r = ft_lstsize_bonus(list);
// 	t_list *t = ft_lstlast(list);
// 	printf("%s\n",t->content);
// }