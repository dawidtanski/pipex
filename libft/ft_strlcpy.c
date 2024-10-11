/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanski <dtanski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 10:41:43 by dtanski           #+#    #+#             */
/*   Updated: 2024/05/17 11:42:58 by dtanski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	const char		*buffer1;
	unsigned int	length;

	i = 0;
	length = 0;
	buffer1 = src;
	if (!src)
		return (0);
	while (buffer1[i] != '\0')
		i++;
	length = i;
	if (dstsize == 0)
		return (length);
	i = 0;
	while (i < length && i < (dstsize - 1) && dstsize != 0)
	{
		dst[i] = buffer1[i];
		i++;
	}
	dst[i] = '\0';
	return (length);
}
