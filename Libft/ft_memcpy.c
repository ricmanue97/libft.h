/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricmanue <ricmanue@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 11:07:50 by ricmanue          #+#    #+#             */
/*   Updated: 2024/04/22 11:47:43 by ricmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
//const void significa pointer para um tipo nao especificado de data constante
// novamente e necessario fazer um cast para unsinged char
//neste passo copiamos e colamos a source no dest, e ignoramos overlap
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*source;

	dest = (unsigned char *) dst;
	source = (unsigned char *) src;
	i = 0;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		dest[i] = source[i];
		i++;
	}
	return (dest);
}

/* #include <stdio.h>

#include <string.h>




int	main(void)

{

	char src[50] = "Hello, World!";

	char dst[50];

	char dst2[50];

	size_t n = 10;


	// Test with overlapping memory regions

	memcpy(dst, src, n);

	ft_memcpy(dst2, src, n);


	printf("Original string: %s\n", src);

	printf("memcpy result: %s\n", dst);

	printf("ft_memcpy result: %s\n", dst2);


	// Test with non-overlapping memory regions

	memcpy(dst, src + n, n);

	ft_memcpy(dst2, src + n, n);


	printf("Original string: %s\n", src);

	printf("memcpy result: %s\n", dst);

	printf("ft_memcpy result: %s\n", dst2);


	return (0);

} */
