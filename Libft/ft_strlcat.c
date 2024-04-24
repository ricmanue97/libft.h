/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricardoalcobia <ricardoalcobia@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 11:11:22 by ricmanue          #+#    #+#             */
/*   Updated: 2024/04/23 10:51:36 by ricardoalco      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	srclen;
	size_t	dstlen;
	size_t	i;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dest);
	if (size <= dstlen)
		return (size + srclen);
	i = dstlen;
	while (i < size - 1 && *src)
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = '\0';
	return (dstlen + srclen);
}

/* #include <stdio.h>

int main()
{
	char *src = "tudo bem";
	char dest[20] = "ola";
	size_t size = 0;

	printf("%zu", ft_strlcat(dest, src, size));
} */
//CORRIGIR
