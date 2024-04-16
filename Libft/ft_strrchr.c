/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricmanue <ricmanue@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 14:20:59 by ricmanue          #+#    #+#             */
/*   Updated: 2024/04/15 16:36:30 by ricmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c )
{
	size_t	slen;
	
	while (slen > 0)
	{
		if (s[slen - 1] == c)
			return(slen - 1);
		slen--;
	}
	return (0);
}