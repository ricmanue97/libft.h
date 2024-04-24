/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricardoalcobia <ricardoalcobia@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:27:15 by ricmanue          #+#    #+#             */
/*   Updated: 2024/04/23 14:22:01 by ricardoalco      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
//32aqui podia ter chamado por duas vezes o memcopy mas
//pareceu me mais eficiente assim
{
	size_t			i;
	unsigned char	*temp;
	unsigned char	*dest;
	unsigned char	*source;

	dest = (unsigned char *) dst;
	source = (unsigned char *) src;
	temp = dest;
	i = 0;
	if (!dst && !src)
		return (NULL);
	if (!dest)
	{
		while (i < n)
		{
			temp[i] = source[i];
			dest[i] = temp[i];
			i++;
		}
	}
	else
	{
		ft_memcpy(dest, source, n);
	}
	return (dest);
}*/
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
