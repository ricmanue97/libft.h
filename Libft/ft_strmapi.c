/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricmanue <ricmanue@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:57:44 by ricmanue          #+#    #+#             */
/*   Updated: 2024/04/19 09:55:02 by ricmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

 char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *str;
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	while (str[i] != '\0')
		{
			str[i] = f(i, str[i]);
			i++;
		}
	return (str);
}

