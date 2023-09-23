/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <paulo-do@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 12:17:23 by paulo-do          #+#    #+#             */
/*   Updated: 2023/09/23 14:59:09 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if(needle[0] == '\0')
		return((char *) haystack);

	while(haystack[i] != '\0' && i < n)
	{
		j = 0;
		while(haystack[i + j] == needle[j] && (i + j) < n)
		{
			if(needle[j + 1] == '\0')
				return((char *)&haystack[i]);
			j++;
		}
		i++;
	}
	return(0);

}