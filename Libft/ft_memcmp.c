/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricmanue <ricmanue@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 10:24:57 by ricmanue          #+#    #+#             */
/*   Updated: 2024/04/22 11:58:00 by ricmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
// novamente e necessario fazer um cast para unsinged char
{
	unsigned char	*dst;
	unsigned char	*src;
	size_t			i;
	int				res;

	dst = (unsigned char *) s2;
	src = (unsigned char *) s1;
	i = 0;
	while (i < n)
	{
		if (src[i] != dst[i])
		{
			res = src[i] - dst[i];
			return (res);
		}
		i++;
	}
	return (0);
}
