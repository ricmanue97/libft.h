/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricmanue <ricmanue@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:20:05 by ricmanue          #+#    #+#             */
/*   Updated: 2024/05/02 14:39:18 by ricmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countwords(char const *s, char c)
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
	size_t	ii;

	i = 0;
	ii = 0;
	if (!(result = (char **)malloc(sizeof(char *) * (countwords(s, c) + 1))))
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				ii = ft_strlen(s);
			else
				ii = ft_strchr(s, c) - s;
			result[i] = ft_substr(s, 0, ii);
			s += ii;
			i++;
		}
	}
	result[i] = NULL;
	return (result);
}



/* #include <stdio.h>
#include "libft.h"

void print_words(char **words)
{
	int i = 0;
	while (words[i])
	{
		printf("%s\n", words[i]);
		i++;
	}
}

int main()
{
	char *str1 = "This is a test string";
	char **result1 = ft_split(str1, ' ');

	printf("Words in string 1:\n");
	print_words(result1);
	free(result1);
} */


