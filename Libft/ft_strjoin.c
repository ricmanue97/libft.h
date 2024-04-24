/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricardoalcobia <ricardoalcobia@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 14:05:20 by ricmanue          #+#    #+#             */
/*   Updated: 2024/04/23 15:23:41 by ricardoalco      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	lens1;
	size_t	lens2;
	char	*a;

	if (!s1 && !s2)
		return (ft_strdup(""));
	if (s1 && !s2)
		return (ft_strdup(s1));
	if (!s1 && s2)
		return (ft_strdup(s2));
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	a = malloc(sizeof(char) * (lens1 + lens2 + 1));
	if (!a)
		return (NULL);
	ft_strlcpy (a, s1, lens1 + 1);
	ft_strlcat (a, s2, lens2 + lens1 + 1);
	return (a);
}

/* int main (void)
{
    char *s1 = "ola ";
	char *s2 = "mundo";
    printf("%s", ft_strjoin(s1, s2));
	return (0);
}
 */
