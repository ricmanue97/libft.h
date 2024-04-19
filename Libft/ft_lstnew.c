/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricmanue <ricmanue@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 11:46:04 by ricmanue          #+#    #+#             */
/*   Updated: 2024/04/19 12:15:49 by ricmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)//void pointer porque e um pointer generico
{
	t_list *newnode;

	newnode = malloc(sizeof(t_list));
	if (newnode == NULL)
		return (NULL);
	newnode->content = content;//o content do meu node vai apontar para o content do node seguinte.
	newnode->next = NULL;
	return (newnode);
}
