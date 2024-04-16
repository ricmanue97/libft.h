/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricmanue <ricmanue@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:27:15 by ricmanue          #+#    #+#             */
/*   Updated: 2024/04/15 16:37:02 by ricmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void* ft_memmove(void* dst, const void* src, size_t n)
{
	size_t i;
	unsigned char *temp;
	unsigned char *dest;
	unsigned char *source;

	dest = (unsigned char *) dst;
	source = (unsigned char *) src;
	i = 0;
	if (dest != '\0')
	{
		while (i < n)
		{
			temp[i] = source[i];
			dest[i] = temp[i];
			i++;
	//aqui podia ter chamado por duas vezes o memcopy mas pareceu me mais eficiente assim
		}
	}
	else
		{
			ft_memcpy(dest, source, n);
		}
		return (dest);
}
