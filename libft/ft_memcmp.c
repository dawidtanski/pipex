/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanski <dtanski@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 11:30:40 by dtanski           #+#    #+#             */
/*   Updated: 2024/03/15 11:30:43 by dtanski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *s1, const void *s2, int n)
{
	int				i;
	unsigned char	*buff1;
	unsigned char	*buff2;

	buff1 = (unsigned char *)s1;
	buff2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while ((buff1[i] == buff2[i]) && i < n - 1)
		i++;
	return (buff1[i] - buff2[i]);
}
