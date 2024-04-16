/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricmanue <ricmanue@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 11:14:16 by ricmanue          #+#    #+#             */
/*   Updated: 2024/04/15 16:36:33 by ricmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	ii;
	char * a;
	
	i = 0;
	a = (char *) big;
	if (!little)
		return (a);
	while (i < len)
	{
		ii = 0;
		i++;
		while(big[i] == little[ii] && little[ii] != '\0')
		{
			i++;
			ii++;
			len--;
		}	
	}
	return (&a[i - ii]);
}
int main() 
{
    char haystack[] = "Hello, world! How are you?";
    char needle[] = "orld";
    char *result;

    // Search for the substring "world" in the haystack string
    result = ft_strnstr(haystack, needle, strlen(haystack) - 1);

    // Check if the substring was found
    if (result != NULL) {
        printf("Substring found at position: %ld\n", result - haystack);
    } else {
        printf("Substring not found.\n");
    }

    return 0;
}