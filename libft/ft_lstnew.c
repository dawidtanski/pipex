/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanski <dtanski@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 09:45:16 by dtanski           #+#    #+#             */
/*   Updated: 2024/03/25 10:46:11 by dtanski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (new == NULL)
		return (0);
	new -> content = content;
	new -> next = NULL;
	return (new);
}
/*
int main(void)
{
	char	*str;
	t_list	*elem;

	str = (char *)malloc(sizeof(char) *6);
	strcpy(str, "Hello");
	elem = ft_lstnew((void *)str);
	printf("%s\n",(char *) elem->content);
	free(elem->content);
	free(elem);
	return (0);
}
*/
