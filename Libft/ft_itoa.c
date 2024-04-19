/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricmanue <ricmanue@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 09:37:25 by ricmanue          #+#    #+#             */
/*   Updated: 2024/04/19 14:59:07 by ricmanue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

int ft_countnum( int n)
{
	int i;

	i = 0;
	if (n > 0)
	{
		while (n > 0)
		{
			n = n / 10;
			i++;
		}
		return(i);
	}
	else
	{
		while( n < 0)
		{
			n = n / 10;
			i++;
		}
		i++;
		return(i);
	}
}

char *ft_itoa(int n)
{
	char *num;
	int numsize;

	numsize = ft_countnum(n);
	num = malloc(sizeof(char) * (numsize + 1));
	if (!num)
		return (NULL);
	num[numsize] = '\0';
	if (n == -2147483648)
		return (num = "-2147483648");
	if (n == 0)
		num[0] = 48;
	if (n < 0)
	{
		num[0] = '-';
		n *= -1;
	}
	while (n > 0 && n != -2147483648)
	{
		numsize--;
		num[numsize] = (n % 10) + '0';
		n = n / 10;
	}
	return (num);
}

  #include <stdlib.h>
#include <stdio.h>
int main()
{
    int test_value = -2147483648;
    printf("%d\n", ft_countnum(test_value));
    printf("%s\n",ft_itoa(test_value));
    return 0;
}


