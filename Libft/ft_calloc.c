/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricmanue <ricmanue@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 10:18:50 by ricmanue          #+#    #+#             */
/*   Updated: 2024/04/15 16:37:32 by ricmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void* 	ft_calloc(size_t num_elements, size_t element_size)
{
	void	*a;
	size_t	size;

	size = num_elements * element_size;
	a = malloc(size);
	if(!a)
		return (NULL);
	ft_bzero(a, size);
	return (a);
}