/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricmanue <ricmanue@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 11:21:16 by ricmanue          #+#    #+#             */
/*   Updated: 2024/04/15 16:36:52 by ricmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* #include <string.h>

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
} */

char* ft_strdup(const char* str)
{
	int		length;
	int		i;
	char	*dest;
	
	length = strlen (str) + 1;//ft_strlen
	
	dest = malloc(sizeof(char) * (length));
	if (dest == NULL)
		return (NULL);
	ft_strlcpy(dest, (char *) str, length);//cast para levar o valor par strlcpy
	return (dest);
}
/* #include <stdio.h>
int main(void)
{
    const char *source = "Hello, World!";
    char *duplicate = ft_strdup(source);

    if (duplicate != NULL)
    {
        printf("Original string: %s\n", source);
        printf("Duplicated string: %s\n", duplicate);

        free(duplicate);
    }
    else
    {
        printf("Memory allocation failed!\n");
    }

    return 0;
} */