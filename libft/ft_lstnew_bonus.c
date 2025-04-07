/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochachi <ochachi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:28:01 by ochachi           #+#    #+#             */
/*   Updated: 2024/11/06 23:25:28 by ochachi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
// int main()
// {
// 	int t[] = {3};
// 	t_list *node = ft_lstnew((void *)t);
// 	printf("%d\n",*((int *)node->content));
// }
//
// int main()
// {
// 	char t[] = "oumaima";
// 	t_list *node = ft_lstnew((void *)t);
// 		printf("%s\n", ((char *)(node->content)));
// }