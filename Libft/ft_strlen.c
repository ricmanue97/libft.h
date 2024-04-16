/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricmanue <ricmanue@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 14:22:17 by ricmanue          #+#    #+#             */
/*   Updated: 2024/04/15 16:36:40 by ricmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *c)
{
	size_t	i;

	if (!c)
		return (0);
	i = 0;
	while (c[i])
		i++;
	return(i);	
}
/* #include<stdio.h>
 #include <string.h>
int main (void)
{
	
   char *str = "a\0daA";
   printf("%zu", strlen(str));
}  */