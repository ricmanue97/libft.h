/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricmanue <ricmanue@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 10:06:39 by ricmanue          #+#    #+#             */
/*   Updated: 2024/04/19 10:40:38 by ricmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putstr_fd(char *s, int fd)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		write (fd, &s[i], 1);
		i++;
	}
}
