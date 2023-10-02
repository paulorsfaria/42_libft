/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <paulo-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 15:18:41 by paulo-do          #+#    #+#             */
/*   Updated: 2023/10/02 14:27:16 by paulo-do         ###   ########.fr       */
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
	if (size == 0)
		return (ft_strlen(src));
	if (size < sleng)
		return (sleng + size);
	while ((src[i] != '\0') && (i < dleng - size -1))
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[sleng] = '\0';
	return (dleng + ft_strlen(src));
}
