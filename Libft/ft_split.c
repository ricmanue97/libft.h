/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricardoalcobia <ricardoalcobia@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:20:05 by ricmanue          #+#    #+#             */
/*   Updated: 2024/04/23 15:42:45 by ricardoalco      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(char const *s, char c)
{
	int	i;
	int	trigger;
	int	count;

	i = 0;
	trigger = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && trigger == 0)
		{
			trigger = 1;
			count++;
		}
		else if (s[i] == c)
			trigger = 0;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!(result = (char **)malloc(sizeof(char *) * (ft_countwords(s, c) + 1))))
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				j = ft_strlen(s);
			else
				j = ft_strchr(s, c) - s;
			result[i] = ft_substr(s, 0, j);
			s += j;
			i++;
		}
	}
	result[i] = NULL;
	return (result);
}
/* #include "libft.h"
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
} */

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
