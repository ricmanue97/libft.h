/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricmanue <ricmanue@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 12:46:57 by ricmanue          #+#    #+#             */
/*   Updated: 2024/04/11 12:46:58 by ricmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr( const char *s, int c)
{
	size_t	i;
	char *s1;

	i = 0;
	s1 = (char*) s;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s1[i]);
		i++;
	}
	return (0);
}
/* #include <stdio.h>

int main(void)

{

    const char *str = "Hello, World!";

    char *result;


    result = ft_strchr(str, 'W');

    if (result) {

        printf("Found 'W' at position %ld\n", result - str);

    } else {

        printf("Did not find 'W'\n");

    }


    result = ft_strchr(str, 'Z');

    if (result) {

        printf("Found 'Z' at position %ld\n", result - str);

    } else {

        printf("Did not find 'Z'\n");

    }


    return 0;

} */