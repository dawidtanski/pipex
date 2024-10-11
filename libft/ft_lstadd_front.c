/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanski <dtanski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 10:51:12 by dtanski           #+#    #+#             */
/*   Updated: 2024/03/25 16:16:14 by dtanski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}

/*
int main(void)
{
	t_list	*head = NULL;
	t_list	*new1 = ft_lstnew("First");
	ft_lstadd_front(&head,new1);
	printf("List after adding new eleements in front of it:\n");
	t_list *current = head;
	while (current != NULL)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
	while(head != NULL)
	{
		t_list *tmp = head;
		head = head->next;
		free(tmp->content);
		free(tmp);
	}
	return (0);
}
*/
