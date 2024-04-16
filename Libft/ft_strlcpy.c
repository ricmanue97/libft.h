/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricmanue <ricmanue@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:16:15 by ricmanue          #+#    #+#             */
/*   Updated: 2024/04/15 16:36:43 by ricmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//o strlcopy garante que nao existem overflows
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
// utilizamos o const char porque garantimos que a funcao nao muda nada na source
{
	size_t	srclen;
	size_t	i;
	
	i = 0;
	srclen = strlen(src);
	//nao esquecer de por ft_strlen
	if (src == NULL)
		return(0);
	while (i < dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	return (srclen);
}
/* #include<stdio.h>
int main (void)
{
    char *str = "asdaA1";
	size_t	dstsize = 4;
	char dest[dstsize];
    printf("%zu", ft_strlcpy(dest, str, dstsize));
}	 */