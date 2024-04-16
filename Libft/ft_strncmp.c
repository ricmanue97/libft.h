/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricmanue <ricmanue@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 17:02:29 by ricmanue          #+#    #+#             */
/*   Updated: 2024/04/15 16:36:37 by ricmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;
	int	res;
	
	i = 0;
	if (n == 0)
		return (0);
	while (str1[i] == str2[i] && str1[i] != '\0')
		i++;
	res = str1[i] - str2[i];
	return (res);
}
#include <stdio.h>

int main()
{
	char *s = "ole";
	char *s1 = "ola";
	printf("%d", ft_strncmp(s, s1, 3)); 
}