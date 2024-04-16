/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricmanue <ricmanue@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 16:53:41 by ricmanue          #+#    #+#             */
/*   Updated: 2024/04/15 16:36:59 by ricmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void*	ft_memset(void *c, int d, size_t len)
{
	unsigned char *str;
	
	//de seguida temos de fazer um cast de int para unsigned char de acordo com o man de memset
	str = (unsigned char *) c;
	// agora sim fazemos o loop para adicionar o caracter len vezes
	while (len != 0)
	{
		str[len - 1] = c;
		len--;
	}
	// o return e entao o que guardamos na memoria apontada por c
	return (c);
}
