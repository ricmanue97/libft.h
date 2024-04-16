/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricmanue <ricmanue@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 11:59:11 by ricmanue          #+#    #+#             */
/*   Updated: 2024/04/15 16:36:23 by ricmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *a;
	int i;
	
	i = 0;
	a = (char *)malloc(sizeof(char) * (len + 1));
	if (!a)
		return (NULL);
	while (i < len && s[start] != '\0')
	{
		a[i] = s[start];
		i++;
		start++; 
	}
	a[i] = '\0';
	return (a);
}
/* #include <stdio.h>
int main(void)
{
    const char *str = "Hello, World!";
    unsigned int start = 1;
    size_t length = 10;

    char *substring = ft_substr(str, start, length);
    if (substring)
    {
        printf("Original string: %s\n", str);
        printf("Substring from index %u with length %zu: %s\n",
	 start, length, substring);
        free(substring); // Free dynamically allocated memory
    }
    else
    {
        printf("Memory allocation failed!\n");
    }

    return 0;
} */