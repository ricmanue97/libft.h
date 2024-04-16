/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricmanue <ricmanue@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 11:07:50 by ricmanue          #+#    #+#             */
/*   Updated: 2024/04/15 16:37:05 by ricmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void 	*ft_memcpy(void *dst, const void *src, size_t n)
//const void significa pointer para um tipo nao especificado de data constante
{
	size_t	i;
	// novamente e necessario fazer um cast para unsinged char
	unsigned char *dest;
	unsigned char *source;

	dest = (unsigned char *) dst;
	source = (unsigned char *) src;
	while (i < n)
	{
		dest[i] = source[i];//neste passo copiamos e colamos a source no dest, e ignoramos overlap
		i++;
	}
	return (dest);
}