/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <paulo-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:47:21 by paulo-do          #+#    #+#             */
/*   Updated: 2023/10/07 18:48:11 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char *newString;
	i = 0;
	newString = (char*)malloc(sizeof(char) * (len + 1));
	if(newString == NULL)
		return (NULL);
	while(i < len && s[start] != '\0')
	{
		newString[i] = s[start];
		i++;
		start++;
	}
	newString[i] = '\0';
	if (i == 0)
	{
		free(newString);
		return (NULL);
	}
	return(newString);
}