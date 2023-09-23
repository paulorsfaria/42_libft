/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <paulo-do@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 15:01:49 by paulo-do          #+#    #+#             */
/*   Updated: 2023/09/23 15:12:51 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;
	i = 0;
	while((str1[i] != '\0' || str2[i] != '\0') && i < n)
	{
		if(str1[i] != str2[i])
			return (int)(str1[i] - str2[i]);
		i++;
	}
	return (0);
}