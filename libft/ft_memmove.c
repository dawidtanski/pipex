/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanski <dtanski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 10:33:28 by dtanski           #+#    #+#             */
/*   Updated: 2024/03/25 16:25:07 by dtanski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int	i;
	char			*buffer1;
	char			*buffer2;

	i = len;
	buffer1 = (char *)src;
	buffer2 = (char *)dst;
	if (dst == src)
		return (dst);
	else if (buffer2 > buffer1)
	{
		while (i-- > 0)
			*(buffer2 + i) = *(buffer1 + i);
	}
	else
	{
		i = 0;
		while (i < len)
		{
			*(buffer2 + i) = *(buffer1 + i);
			i++;
		}
	}
	return (buffer2);
}
