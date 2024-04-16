/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricmanue <ricmanue@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 14:34:08 by ricmanue          #+#    #+#             */
/*   Updated: 2024/04/16 10:59:20 by ricmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/* size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
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
}
 */
//cast para poder mexer no const char* linha 51
//mudar para ft_strchrlinha 54
//novamente cast para poder mexer no const char* linha 57
//mudar para ft_strchr linha 59
//mudar para ft_strlcpy linha 67
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*start;
	char	*end;
	char	*trimmed;
	size_t	i;
	size_t	ii;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	if (!*s1)
		return (strdup(s1));
	start = (char *) s1;
	while (start[i] && strchr(set, start[i]))
		i++;
	end = (char *) s1;
	ii = strlen(s1) - 1;
	while (end[ii] && strchr(set, end[ii]))
		ii--;
	trimmed = malloc ((sizeof (char)) * (ii - i + 1));
	if (!trimmed)
		return (NULL);
	ft_strlcpy(trimmed, &s1[i], ii - i + 1);
	return (trimmed);
}
/* #include "libft.h"
#include <stdio.h>

int main(void)
{
	char *str1 = "  Hello, World!  ";
	char *trimmed1 = ft_strtrim(str1, " ");
	printf("Trimmed string 1: %s\n", trimmed1);
	free(trimmed1);

	char *str2 = "***Hello***";
	char *trimmed2 = ft_strtrim(str2, "*");
	printf("Trimmed string 2: %s\n", trimmed2);
	free(trimmed2);

	char *str3 = "Hello, World!";
	char *trimmed3 = ft_strtrim(str3, "H");
	printf("Trimmed string 3: %s\n", trimmed3);
	free(trimmed3);

	char *str4 = "";

	char *trimmed4 = ft_strtrim(str4, " ");

	printf("Trimmed string 4: %s\n", trimmed4);

	free(trimmed4);


	char *str5 = "  \t\n\r\n  ";

	char *trimmed5 = ft_strtrim(str5, " \t\n\r");

	printf("Trimmed string 5: %s\n", trimmed5);

	free(trimmed5);

	return 0;
} */
