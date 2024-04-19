/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricmanue <ricmanue@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:20:05 by ricmanue          #+#    #+#             */
/*   Updated: 2024/04/17 10:00:42 by ricmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_countwords(char const *s, char c)
{
	size_t	i;
	size_t	counter;
	int	inword;

	i = 0;
	counter = 0;
	while (s[i])
	{
		inword = 0;
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i])
		{
			if (!inword)
			{
				counter++;
				inword = 1;
			}
			s++;
		}
	}
	return (counter);
}


/*
#include <stdio.h>


int main()

{

    char str[] = "This is a test string.  It has many words.";

    printf("Number of words: %ld\n", ft_countwords(str, ' '));

    return 0;

} */

/* char **ft_split(char const *s, char c)
{

} */


