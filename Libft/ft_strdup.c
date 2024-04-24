/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricardoalcobia <ricardoalcobia@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 11:21:16 by ricmanue          #+#    #+#             */
/*   Updated: 2024/04/23 15:10:21 by ricardoalco      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
//cast para levar o valor par strlcpy
{
	int		length;
	char	*dest;

	length = ft_strlen (src) + 1;
	dest = malloc(sizeof(char) * (length));
	if (dest == NULL)
		return (NULL);
	ft_strlcpy(dest, (char *) src, length);
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
