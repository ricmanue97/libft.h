/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricmanue <ricmanue@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 11:11:22 by ricmanue          #+#    #+#             */
/*   Updated: 2024/04/15 16:36:46 by ricmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t ft_strlcat(char *dest, const char *src, size_t size)
//devolvo o tamnho do dest e faco o concatenamento das strings
{
	size_t	srclen;
	size_t	temp;
	
	srclen = strlen(src);
	//nao esquecer de mudar a strlen para ft_strlen
	temp = srclen;
	while (temp > 0)
	{
		dest[size + temp] = src[temp];
		temp--; 
	}
	size = size + srclen;
	return (size);
}

#include <stdio.h>

int main()
{
	char *src = "tudo bem";
	char dest[20] = "ola";
	size_t size = 0;
	
	printf("%zu", ft_strlcat(dest, src, size));
}


CORRIGIR