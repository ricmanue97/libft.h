/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricardoalcobia <ricardoalcobia@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:16:15 by ricmanue          #+#    #+#             */
/*   Updated: 2024/04/23 13:41:09 by ricardoalco      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//o strlcopy garante que nao existem overflows
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
// utilizamos o const char porque garantimos que a funcao
//nao muda nada na source
{
	size_t	srclen;
	size_t	i;

	i = 0;
	srclen = ft_strlen(src);
	if (src == NULL)
		return (0);
	if(dstsize)
	{
		while (src[i] && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
		return (srclen);
}

/*#include<stdio.h>
int main (void)
{
    char *str = "asdaA1";
	size_t	dstsize = 4;
	char dest[dstsize];
    printf("%zu", ft_strlcpy(dest, str, dstsize));
	printf("\n%s", dest);
	printf("\n%zu", strlcpy(dest, str, dstsize));
	printf("\n%s", dest);
}*/
