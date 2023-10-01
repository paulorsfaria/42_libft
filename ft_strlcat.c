/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <paulo-do@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 15:18:41 by paulo-do          #+#    #+#             */
/*   Updated: 2023/09/30 17:56:37 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	sleng;
	size_t	dleng;

	i = 0;
	dleng = ft_strlen(dst);
	j = dleng;
	sleng = ft_strlen(src);
	if(size == 0)
		return (ft_strlen(src));
	if(size < sleng)
		return (sleng + size);
	while (src[i] != '\0' && i < dlen - size -1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[leng] = '\0';
	return (dlen + ft_strlen(src));
}
