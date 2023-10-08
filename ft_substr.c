/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <paulo-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 14:08:08 by paulo-do          #+#    #+#             */
/*   Updated: 2023/10/08 15:30:28 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*newstr;
	size_t	slen;

	i = 0;
	slen = (unsigned int)ft_strlen(s);
	if (!s)
		return (NULL);
	if (start >= slen || len == 0)
	{
		newstr = (char *)malloc(sizeof(char) * 1);
		if (!newstr)
			return (NULL);
		newstr[0] = '\0';
		return (newstr);
	}
	if (start + len > slen)
		len = slen - start;
	newstr = (char *)malloc(sizeof(char) * (len + 1));
	if (newstr == NULL)
		return (NULL);
	while (i < len && s[start] != '\0')
		newstr[i++] = s[start++];
	newstr[i] = '\0';
	return (newstr);
}
