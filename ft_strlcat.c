/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulo-do <paulo-do@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 15:18:41 by paulo-do          #+#    #+#             */
/*   Updated: 2023/09/30 16:18:15 by paulo-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	leng;

	i = 0;
	leng = ft_strlen(dst);
	while (src[i] != '\0' && (leng + i) < size)
	{
		dst[leng + i] = src[i];
		i++;
	}
	dst[leng + i] = '\0';
	return (dst);
}
