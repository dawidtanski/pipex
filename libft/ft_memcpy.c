/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanski <dtanski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 09:59:19 by dtanski           #+#    #+#             */
/*   Updated: 2024/03/25 16:23:56 by dtanski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	i;
	const char		*buffer1;
	char			*buffer2;

	i = 0;
	buffer1 = (char *)src;
	buffer2 = dst;
	while (i < n && (src || dst))
	{
		buffer2[i] = buffer1[i];
		i++;
	}
	return (dst);
}
