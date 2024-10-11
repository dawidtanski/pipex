/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanski <dtanski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 12:17:13 by dtanski           #+#    #+#             */
/*   Updated: 2024/03/25 16:14:35 by dtanski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst -> next)
		lst = lst -> next;
	return (lst);
}
/*
int main (void)
{
	t_list *first = ft_lstnew("1");
	t_list *second = ft_lstnew("2");
	ft_lstadd_front(&first,second);
	printf("%s", (char *)first->content);
	return (0);
}
*/
