/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricardoalcobia <ricardoalcobia@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:57:44 by ricmanue          #+#    #+#             */
/*   Updated: 2024/04/24 14:59:38 by ricardoalco      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	size_t	len;

	if (!s)
		return (NULL);
	len = 0;
	str = malloc(ft_strlen(s) + 1);
	if (!str)
		return(NULL);
	while (s[len] != '\0')
	{
		str[len] = f(len, s[len]);
		len++;
	}
	str[len] = '\0';
	return (str);	
}
/* char f(unsigned int a, char c)
{
	char str;
	str = ft_toupper(c);
	return (str);
}
int main()
{
	char *str = "hello";
	char *str2 = ft_strmapi(str, f);
	printf("%s\n", str2);
	
} */
