/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricmanue <ricmanue@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 14:05:20 by ricmanue          #+#    #+#             */
/*   Updated: 2024/04/15 16:38:09 by ricmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* size_t ft_strlcat(char *dest, const char *src, size_t size)
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

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t	lens1;
	size_t	lens2;
	char	*a;
	
	lens1 = strlen(s1);
	lens2 = strlen(s2);//mudar para ft_strlen
	a = malloc(sizeof(char) * (lens1 + lens2 + 1));
	if (!a)
		return (NULL);
	ft_strlcpy (a, s1, lens1);
	strcat (a, s2);
	return (a);
}	

int main (void)
{
    char *s1 = "ola ";
	char *s2 = "mundo";
    printf("%s", ft_strjoin(s1, s2));
	return (0);
}	