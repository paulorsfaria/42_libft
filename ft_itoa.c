/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 20:18:11 by paulo-do          #+#    #+#             */
/*   Updated: 2023/10/08 22:16:44 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	convert_me_daddy(int n)
{
	return (n + 48);
}
int	count_numbers(int n)
{
	int	counter;

	counter = 0;

	if (n < 0)
	{
		counter++;
		n = n * - 1;
	}
	while (n !=  0)
	{
		n = n / 10;
		counter++;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	int	size;
	char	*number;
	
	size = count_numbers(n);
	if (n == 0)
		return (ft_strdup("0"));
	number = (char *)malloc(sizeof(char) * (size + 1));
	if (!number)
		return (NULL);
	if (n == -2147483648)
	{
		number = "-2147483648";
		return (number);
	}
	if (n < 0)
	{
		number[0] = '-';
		n = n * -1;
		size--;
	}
	number[size--] = '\0';
	while (size >= 0)
	{
		number[size] = convert_me_daddy(n%10);
		size--;
		n = n / 10;	
	}
	return (number);
	
}
