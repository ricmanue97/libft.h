/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricmanue <ricmanue@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:27:15 by ricmanue          #+#    #+#             */
/*   Updated: 2024/05/02 14:38:42 by ricmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*dest;
	unsigned char	*source;

	dest = (unsigned char *) dst;
	source = (unsigned char *) src;
	if (!dst && !src)
		return (NULL);
	if (dest > source)
	{
		while (n > 0)
		{
			n--;
			dest[n] = source[n];
		}
	}
	else
	{
		while (n > 0)
		{
			n--;
			*dest++ = *source++;
		}
	}
	return (dst);
}
