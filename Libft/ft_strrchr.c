/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricmanue <ricmanue@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 14:20:59 by ricmanue          #+#    #+#             */
/*   Updated: 2024/04/22 14:57:50 by ricmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s) - 1;
	if (c == 0)
		return ((char *)(s + len + 1));
	while (len >= 0 && s[len] != c)
		len--;
	if (s[len] == c)
		return ((char *)(s + len));
	else
		return (NULL);
} */
 char	*ft_strrchr(const char *s, int c )
{
	int		slen;
	char	*str;

	if (!*s)
		return (NULL);
	str = (char *)s;
	slen = ft_strlen(s) - 1;
	if (c == 0)
		return (&str[slen + 1]);
	while (slen >= 0)
	{
		if (str[slen] == c)
			return (&str[slen]);
		slen--;
	}
	return (NULL);
}
/*  int main()
{
	char	*s = "abcbbbbbb";
	int		c = 'c';
	printf("%s\n", ft_strrchr(s, c));
	printf("%s\n", strrchr(s, c));
	return (0);
} */
