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

static long int	count_numbers(int n)
{
	int	counter;

	counter = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = n * -1;
		counter++;
	}
	while (n != 0)
	{
		counter++;
		n = n / 10;
	}
	return (counter);
}

static char	*if_zero(char *str)
{
	str[0] = '0';
	return (str);
}

char	*ft_itoa(int n)
{
	int			size;
	char		*number;
	long int	nb;

	nb = n;
	size = count_numbers(n);
	if (!size)
		return (NULL);
	number = (char *) malloc(sizeof (char) * (size + 1));
	if (!number)
		return (NULL);
	number[size--] = '\0';
	if (nb == 0)
		return (if_zero(number));
	if (nb < 0)
	{
		number[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		number[size--] = convert_me_daddy(nb % 10);
		nb = nb / 10;
	}
	return (number);
}
