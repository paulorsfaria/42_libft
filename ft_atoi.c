/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <paulo-do@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 16:24:13 by paulo-do          #+#    #+#             */
/*   Updated: 2023/09/30 15:30:07 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sinal;
	int	result;

	i = 0;
	sinal = 1;
	result = 0;
	while(str[i] != '\0')
	{
		while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
			i++;
		if(str[i] == '-')
		{
			sinal *= -1;
			i++;
		}
		while(str[i] >= '0' && str[i] <= '9')
		{
			result = (result * 10) + (str[i] - '0');
			i++;
		}
		return (result * sinal);
	}
	return(0);
	
}
