/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricmanue <ricmanue@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 10:19:32 by ricmanue          #+#    #+#             */
/*   Updated: 2024/04/19 10:38:03 by ricmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
void ft_putnbr_fd (int n, int fd)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n = -n;
		}
		if (n > 9)
		{
			ft_putnbr_fd(n / 10, fd);
			ft_putnbr_fd (n % 10, fd);
		}
		else
			ft_putchar_fd(n + '0', fd);
	}
}
