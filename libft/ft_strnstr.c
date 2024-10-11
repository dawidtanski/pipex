/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanski <dtanski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 11:34:05 by dtanski           #+#    #+#             */
/*   Updated: 2024/04/03 14:22:30 by dtanski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *need, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (need[0] == '\0')
	{
		return ((char *) s);
	}
	while (s[i] != '\0' && i < len)
	{
		while (s[i + j] == need [j] && i + j < len)
		{
			if (need[j + 1] == '\0')
			{
				return ((char *) & s[i]);
			}
			j ++;
		}
		j = 0;
		i++;
	}
	return (0);
}
