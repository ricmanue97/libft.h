/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricardoalcobia <ricardoalcobia@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 10:19:32 by ricmanue          #+#    #+#             */
/*   Updated: 2024/04/22 23:01:43 by ricardoalco      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		ft_putnbr_fd(147483648, fd);
	}
	else
	{
		if (n < 0)
		{
			ft_putchar_fd ('-', fd);
			n = -n;
		}
		if (n > 9)
		{
			ft_putnbr_fd (n / 10, fd);
			ft_putnbr_fd (n % 10, fd);
		}
		else
			ft_putchar_fd (n + '0', fd);
	}
}
