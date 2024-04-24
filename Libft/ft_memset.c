/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricmanue <ricmanue@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 16:53:41 by ricmanue          #+#    #+#             */
/*   Updated: 2024/04/22 11:31:09 by ricmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *c, int d, size_t len)
//de seguida temos de fazer um cast de int para unsigned
//char de acordo com o man de memset
// agora sim fazemos o loop para adicionar o caracter len vezes
// o return e entao o que guardamos na memoria apontada por c
{
	unsigned char	*str;

	str = (unsigned char *) c;
	while (len != 0)
	{
		str[len - 1] = d;
		len--;
	}
	return (str);
}
